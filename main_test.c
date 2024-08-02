#include <stdio.h>
#include <assert.h>
#include "battery_check.h"
#include "lang_sup.h"

int main() {
    assert(batteryIsOk(25, 70, 0.7, LANG_ENG));
    assert(!batteryIsOk(50, 85, 0, LANG_ENG));
    assert(!batteryIsOk(30, 85, 0, LANG_ENG));
    assert(!batteryIsOk(25, 70, 0.9, LANG_ENG));

    assert(batteryIsOk(25, 70, 0.7, LANG_GER));
    assert(!batteryIsOk(50, 85, 0, LANG_GER));
    assert(!batteryIsOk(30, 85, 0, LANG_GER));
    assert(!batteryIsOk(25, 70, 0.9, LANG_GER));
    
    return 0;
}
