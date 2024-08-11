#ifndef LANG_H
#define LANG_H
#include <stdio.h>

// Enum for supported languages
typedef enum {
    LANG_ENG, 
    LANG_GER,
    LANG_COUNT 
} Language;

// Function prototypes
void setPreferedLanguage(int newLanguage);
const char* getTemperatureOutOfRangeMessage(Language lang);
const char* getSocOutOfRangeMessage(Language lang);
const char* getChargeRateOutOfRangeMessage(Language lang);

#endif // LANG_H
