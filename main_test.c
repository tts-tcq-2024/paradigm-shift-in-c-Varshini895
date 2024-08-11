#include <stdio.h>
#include <assert.h>
#include "battery_check.h"
#include "lang_sup.h"

int main() {
    assert(batteryIsOk(20, 60, 0.55, LANG_ENG));
    assert(!batteryIsOk(49, 87, 0, LANG_ENG));
    assert(!batteryIsOk(28, 87, 0, LANG_ENG));
    assert(!batteryIsOk(23, 69, 0.9, LANG_ENG));
  
    assert(batteryIsOk(22, 69, 0.65, LANG_GER));
    assert(!batteryIsOk(49, 88, 0, LANG_GER));
    assert(!batteryIsOk(25, 89, 0, LANG_GER));
    assert(!batteryIsOk(24, 68, 0.91, LANG_GER));
    
    return 0;
}
