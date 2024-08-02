#include "lang_sup.h"

const char* messages[LANG_COUNT][3] = {
    [LANG_ENG] = {
        "Temperature out of range!",
        "State of Charge out of range!",
        "Charge Rate out of range!"
    },
    [LANG_GER] = {
        "Temperatur außerhalb des Bereichs!",
        "Ladezustand außerhalb des Bereichs!",
        "Laderate außerhalb des zulässigen Bereichs!"
    }
};

const char* getTemperatureOutOfRangeMessage(Language lang) {
    return messages[lang][0];
}

const char* getSocOutOfRangeMessage(Language lang) {
    return messages[lang][1];
}

const char* getChargeRateOutOfRangeMessage(Language lang) {
    return messages[lang][2];
}
