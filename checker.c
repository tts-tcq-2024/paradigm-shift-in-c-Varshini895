#include <stdio.h>
#include <assert.h>

int is_temp_ok(float temp) {
    return (temp >= 0 && temp <= 45);
}

int is_soc_ok(float soc) {
    return (soc >= 20 && soc <= 80);
}

int is_charge_rate_ok(float chargeRate) {
    return (chargeRate <= 0.8);
}

//function to check overall battery Health
int is_battery_ok(float temp, float soc, float chargeRate) {
    if (is_temp_ok(temp) && is_soc_ok(soc) && is_charge_rate_ok(chargeRate))
    {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    //test case 1
    if (is_battery_ok(20,70,0.7)) {
        printf("Battery status: OK\n");
    } else {
        printf("Battery status: Warning - check parameters!\n");
    }
    //test case 2
    if (is_battery_ok(50,85,0)) {
        printf("Battery status: OK\n");
    } else {
        printf("Battery status: Warning - check parameters!\n");
    }
    return 0;
}
