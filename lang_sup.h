#ifndef LANG_H
#define LANG_H
#include <stdio.h>

// Enum for supported languages
typedef enum {
    LANG_ENG, 
    LANG_GER,
    // Add more languages here
    LANG_COUNT // This should always be the last item
} Language;

// Function prototypes
const char* getTemperatureOutOfRangeMessage(Language lang);
const char* getSocOutOfRangeMessage(Language lang);
const char* getChargeRateOutOfRangeMessage(Language lang);

#endif // LANG_H
