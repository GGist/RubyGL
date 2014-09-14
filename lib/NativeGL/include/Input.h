#ifndef INPUT_H
#define INPUT_H

#include "SDL.h"

void bindEventCallback(void* callback);

void pumpEvents(void);

#endif // INPUT_H