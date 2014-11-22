#ifndef INPUT_H
#define INPUT_H

#include "SDL.h"

int initInput();

void quitInput();

void addEventWatch(SDL_EventFilter filter, void* userdata);

void deleteEventWatch(SDL_EventFilter filter, void* userdata);

void pumpEvents(void);

#endif // INPUT_H