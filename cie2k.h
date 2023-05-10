#pragma once

#include <type_traits>

namespace cie2k {

template<class T>
T deltaE(T l_1, T a_1, T b_1, T l_2, T a_2, T b_2) {
  static_assert(std::is_floating_point<T>::value, "cie2k deltaE must be of floating-point type"); 
}

}




