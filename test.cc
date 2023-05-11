#include <string>
#include <iomanip>
#include "src/cie2k.h"
#include "gen/test.h"
#include "log.h"

bool fp_eq(float a, float b) {
  char a_buf[128], b_buf[128];
	sprintf(a_buf, "%.4f", a);
	sprintf(b_buf, "%.4f", b);
  //logQ(a_buf, b_buf);
  return std::string(a_buf) == std::string(b_buf);
}

struct LAB {
  double l;
  double a;
  double b;
};

int main() {

  unsigned int test_num = 0;
  unsigned int test_pass = 0;

  // 0:  l1           [OK]
  // 1:  a1           [OK]
  // 2:  b1           [OK]
  // 3:  a1_prime     [OK]
  // 4:  C1_prime     [OK]
  // 5:  h1_prime     [OK]
  // 6:  h_bar_prime  [OK]
  // 7:  G            [OK]
  // 8:  T (t)        [OK]
  // 9:  S_L          [OK]
  // 10: S_C          [OK]
  // 11: S_H          [OK]
  // 12: R_T          [OK] 
  // 13: deltaE       [OK]
  // 14: l2           [OK]
  // 15: a2           [OK] 
  // 16: b2           [OK]
  // 17: a2_prime     [OK]
  // 18: C2_prime     [OK]
  // 19: h2_prime     [OK]

  constexpr unsigned int idx  = 13;

  for (const auto& test_item : test_set) {

    test_num++;

    const double expectDE = test_item[idx];
    const double actualDE = cie2k::deltaE<LAB>({test_item[0] , test_item[1] , test_item[2]},
                                               {test_item[14], test_item[15], test_item[16]});

    std::ostringstream ss;
    ss << std::setw(2) << std::setfill('0') << test_num;
    string s_test_num = ss.str();

    ss.str("");
    ss << std::fixed << std::setw(9) << std::setfill(' ') << (actualDE - expectDE);
    string margin = ss.str();


    bool correct = fp_eq(expectDE, actualDE);
    if (correct) {
      logW(LL_INFO, "[PASS] - test", s_test_num, "| margin: ("+margin+")");
      test_pass++;
    }
    else {
      logW(LL_WARN, "[FAIL] - test", test_num);
      logW(LL_WARN, "         expecting", expectDE, "got", actualDE);
    }
  }

  logW(test_pass != test_set_size ? LL_CRIT : LL_INFO, std::to_string(test_pass)+"/"+std::to_string(test_set_size), "tests passed");

  return 0;
}
