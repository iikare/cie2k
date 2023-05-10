#include "cie2k.h"
#include "gen/test.h"

#include "log.h"


int main() {

  unsigned int test_num = 0;
  for (const auto& test_item : test_set) {

    test_num++;

    const double expectDE = test_item[13];
    const double actualDE = cie2k::deltaE(test_item[0] , test_item[1] , test_item[2],
                                          test_item[14], test_item[15], test_item[16]);
    
    bool correct = expectDE == actualDE;
    if (correct) {
      logW(LL_INFO, "[PASS] - test", test_num);
    }
    else {
      logW(LL_WARN, "[FAIL] - test", test_num);
      logW(LL_WARN, "         expecting", expectDE, "got", actualDE);
    }
  }

  return 0;
}
