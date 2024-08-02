#include "battery_check.h"
#include "lang_sup.h"

#define MIN_TEMPERATURE 0.0
#define MAX_TEMPERATURE 45.0
#define MIN_SOC 20.0
#define MAX_SOC 80.0
#define MAX_CHARGE_RATE 0.8

int isTemperatureOk(float temperature, Language lang) {
    if (temperature < MIN_TEMPERATURE || temperature > MAX_TEMPERATURE) {
        printf("%s\n", getTemperatureOutOfRangeMessage(lang));
        return 0; // Not okay
    }
    return 1; // Okay
}

int isSocOk(float soc, Language lang) {
    if (soc < MIN_SOC || soc > MAX_SOC) {
        printf("%s\n", getSocOutOfRangeMessage(lang));
        return 0; // Not okay
    }
    return 1; // Okay
}

int isChargeRateOk(float chargeRate, Language lang) {
    if (chargeRate > MAX_CHARGE_RATE) {
        printf("%s\n", getChargeRateOutOfRangeMessage(lang));
        return 0; // Not okay
    }
    return 1; // Okay
}

int batteryIsOk(float temperature, float soc, float chargeRate, Language lang) {
    return isTemperatureOk(temperature, lang) &&
           isSocOk(soc, lang) &&
           isChargeRateOk(chargeRate, lang);
}
