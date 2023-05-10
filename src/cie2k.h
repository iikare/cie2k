#pragma once

#include <type_traits>
#include <cmath>

namespace cie2k {

template<class T>
T deltaE(T l1, T a1, T b1, T l2, T a2, T b2) {
  static_assert(std::is_floating_point<T>::value, "cie2k deltaE must be of floating-point type"); 

  // CIEDE2000 implementation
  // as described in "The CIEDE2000 Color-Difference Formula: Implementation Notes, 
  // Supplementary Test Data, and Mathematical Observations" by Gaurav Sharma, Wencheng Wu, Edul N. Dalal

  // utility lambdas
  constexpr auto to_rad = [&] (const T val) {
    return (val*M_PI)/180.0;
  };
  constexpr auto to_deg = [&] (const T val) {
    return (180.0/M_PI)*val;
  };

  // eq.1 omitted

  // eq.2
  T C1 = sqrt((a1*a1)+(b1*b1));
  T C2 = sqrt((a2*a2)+(b2*b2));

  // eq.3
  T C_bar = (C1+C2)/2.0;

  // eq.4
  constexpr T eq_25p7 = 6103515625.0;
  T G = 0.5*(1.0-sqrt(pow(C_bar,7)/(pow(C_bar,7)+eq_25p7)));

  // eq.5
  T a1_prime = (1.0+G)*a1;
  T a2_prime = (1.0+G)*a2;

  // eq.6
  T C1_prime = sqrt((a1_prime*a1_prime)+(b1*b1));
  T C2_prime = sqrt((a2_prime*a2_prime)+(b2*b2));

  // eq.7
  T h1_prime = 0.0;
  if (!(b1 == 0 && a1_prime == 0)) {
    h1_prime = atan2(b1, a1_prime);
    if (h1_prime < 0.0) {
      h1_prime += 2*M_PI;
    }
    h1_prime = to_deg(h1_prime);
  }
  T h2_prime = 0.0;
  if (!(b2 == 0 && a2_prime == 0)) {
    h2_prime = atan2(b2, a2_prime); 
    if (h2_prime < 0.0) {
      h2_prime += 2*M_PI;
    }
    h2_prime = to_deg(h2_prime);
  }

  // eq.8
  T delta_L_prime = l2-l1;

  // eq.9
  T delta_C_prime = C2_prime-C1_prime;

  // eq.10
  T delta_h_prime = 0;
  if (C1_prime*C2_prime != 0) {
    T h_diff = h2_prime-h1_prime;
    //if (fabs(h_diff) <= M_PI) {
    delta_h_prime = h_diff;
    //}
    if (h_diff > M_PI) {
      delta_h_prime = h_diff - 2*M_PI;
    }
    else {
    //else if (h_diff < -M_PI) {
      delta_h_prime = h_diff + 2*M_PI;
    }
  }

  // eq.11
  T delta_H_prime = 2.0*sqrt(C1_prime*C2_prime)*sin(delta_h_prime/2.0);

  // eq.12
  T L_bar_prime = (l1+l2)/2.0;

  // eq.13
  T C_bar_prime = (C1_prime+C2_prime)/2.0;

  // eq.14
  T h_bar_prime = h1_prime+h2_prime;
  if (C1_prime*C2_prime != 0) {
    if (fabs(h1_prime-h2_prime) <= M_PI) {
      h_bar_prime = h_bar_prime/2.0;
    }
    else {
      if (h1_prime+h2_prime < 2*M_PI) {
        h_bar_prime = (h_bar_prime+2*M_PI)/2.0;
      }
      else {
        h_bar_prime = (h_bar_prime-2*M_PI)/2.0;
      }
    }
  }

  // eq.15
  T t = 1.0 - 0.17*cos(h_bar_prime-to_rad(30.0))
            + 0.24*cos(h_bar_prime*2.0)
            + 0.32*cos(h_bar_prime*3.0+to_rad(6.0))
            - 0.20*cos(h_bar_prime*4.0)-to_rad(63.0);

  // eq.16
  T delta_theta = to_rad(30.0)*exp(-pow((h_bar_prime-to_rad(275.0))/to_rad(25.0),2.0)); 

  // eq.17
  //T C_bar_prime_7 = pow(C_bar_prime, 7);
  T R_C = 2*sqrt(pow(C_bar_prime,7)/(pow(C_bar_prime,7)+eq_25p7));

  // eq.18
  T L_50_2 = (L_bar_prime-50)*(L_bar_prime-50);
  T S_L = 1.0 + (0.015*L_50_2)/sqrt(20+L_50_2);

  // eq.19
  T S_C = 1.0 + 0.045*C_bar_prime;

  // eq.20
  T S_H = 1.0 + 0.015*C_bar_prime*t; 

  // eq.21
  T R_T = (-sin(2*delta_theta))*R_C;

  // k_L, k_C, k_H set as chosen in original paper
  constexpr T k_L = 1.0;
  constexpr T k_C = 1.0;
  constexpr T k_H = 1.0;

  // eq.22
  T deltaE = sqrt(pow(delta_L_prime/(k_L*S_L), 2.0) +
                  pow(delta_C_prime/(k_C*S_C), 2.0) +
                  pow(delta_H_prime/(k_H*S_H), 2.0) +
                  R_T*(delta_C_prime/(k_C*S_C))*(delta_H_prime/(k_H*S_H)));

  return deltaE;

}

}



