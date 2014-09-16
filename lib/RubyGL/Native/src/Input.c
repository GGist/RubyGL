#include "Input.h"

int initInput()
{
	return SDL_InitSubSystem(SDL_INIT_EVENTS);
}

void quitInput()
{
	SDL_QuitSubSystem(SDL_INIT_EVENTS);
}

void addEventWatch(SDL_EventFilter filter, void* userdata)
{
	SDL_AddEventWatch(filter, userdata);
}

void pumpEvents(void)
{
	SDL_PumpEvents();
}