//
// Created by Jesus on 16/02/2023.
//

#ifndef EXAMPLES_OPTIONS_H
#define EXAMPLES_OPTIONS_H
#include <raylib.h>
#include "global.h"


typedef enum OptionItems {
    ITEM_PTOS = 0,
    ITEM_THEME,
    ITEM_GAME_MODE,
    ITEM_FULLSCREEN,
} OptionItems;
class Options {
public:
    OptionItems item;
};

Options *initOptions(void);

void updateOptions(Options *const options);

void drawOptions(const Options *const options);

void freeOptions(Options **options);

bool finishOptions(void);


#endif //EXAMPLES_OPTIONS_H
