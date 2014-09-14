#include "Input.h"

int sdlEventFilter(void* userData, SDL_Event* event)
{
	((void (*)())userData)();
}

void bindEventCallback(void* callback)
{
	SDL_AddEventWatch(sdlEventFilter, callback);
}

void pumpEvents(void)
{
	SDL_PumpEvents();
}