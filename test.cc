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

int main() {

  unsigned int test_num = 0;
  unsigned int test_pass = 0;

  // 0:  l1           []
  // 1:  a1           []
  // 2:  b1           []
  // 3:  a1_prime     []
  // 4:  C1_prime     []
  // 5:  h1_prime     []
  // 6:  h_bar_prime  []
  // 7:  G            []
  // 8:  T (t)        []
  // 9:  S_L          []
  // 10: S_C          []
  // 11: S_H          []
  // 12: R_T          [] 
  // 13: deltaE       []
  // 14: l2           []
  // 15: a2           [] 
  // 16: b2           []
  // 17: a2_prime     []
  // 18: C2_prime     []
  // 19: h2_prime     []

  constexpr unsigned int idx  = 13;

  for (const auto& test_item : test_set) {

    test_num++;

    const double expectDE = test_item[idx];
    const double actualDE = cie2k::deltaE(test_item[0] , test_item[1] , test_item[2],
                                          test_item[14], test_item[15], test_item[16]);

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
