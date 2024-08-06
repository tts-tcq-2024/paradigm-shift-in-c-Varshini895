#include "battery_check.h"
#include "lang_sup.h"
#define MIN_TEMPERATURE 0.0
#define MAX_TEMPERATURE 45.0
#define MIN_SOC 20.0
#define MAX_SOC 80.0
#define MAX_CHARGE_RATE 0.8



int preferedLanguage=0;

int isTemperatureOk(float temperature) {
    if (temperature < MIN_TEMPERATURE || temperature > MAX_TEMPERATURE) {
        
        return 0; // Not okay
    }
    return 1; // Okay
}

int isSocOk(float soc) {
    if (soc < MIN_SOC || soc > MAX_SOC) {
        
        return 0; // Not okay
    }
    return 1; // Okay
}

int isChargeRateOk(float chargeRate, int lang) {
    if (chargeRate > MAX_CHARGE_RATE) {
        
        return 0; // Not okay
    }
    return 1; // Okay
}

int batteryIsOk(float temperature, float soc, float chargeRate, int lang) {
    int tempOk=isTemperatureOk(temperature);
    int socOk=isSocOk(soc);
    int chargeRateOk=isChargeRateOk(chargeRate);

   printErrorMessage( getErrorMessage(tempOk,lang,0));
    printErrorMessage(getErrorMessage(socOk,lang,1));
    printErrorMessage(getErrorMessage(chargeRateOk,lang,1));
    return  tempOk&&
           socOk &&
           chargeRateOk(chargeRate, lang);
}
char* getErrorMessage(int status, int lang,int parameterIndex){
return getLangaugaeSpecificMessage(lang,parameterIndex);
}

void printMessageOnConsole(char* message){
   printf("%s",message);
}
