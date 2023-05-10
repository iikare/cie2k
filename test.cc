#include <string>
#include "cie2k.h"
#include "gen/test.h"
#include "log.h"


int main() {

  unsigned int test_num = 0;
  unsigned int test_pass = 0;
  for (const auto& test_item : test_set) {

    test_num++;

    const double expectDE = test_item[13];
    const double actualDE = cie2k::deltaE(test_item[0] , test_item[1] , test_item[2],
                                          test_item[14], test_item[15], test_item[16]);
    bool correct = trunc(1000.0*expectDE) == trunc(1000.0*actualDE);
    if (correct) {
      logW(LL_INFO, "[PASS] - test", test_num);
      test_pass++;
    }
    else {
      logW(LL_WARN, "[FAIL] - test", test_num);
      logW(LL_WARN, "         expecting", expectDE, "got", actualDE);
    }
  }

  logW(LL_DEBUG, std::to_string(test_pass)+"/"+std::to_string(test_set_size), "tests passed");



  return 0;
}
