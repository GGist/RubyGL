#ifndef WINDOW_H
#define WINDOW_H

#include "SDL.h"

int initWindow();

void quitWindow();

SDL_Window* createWindow(const char* title, int x, int y, int w, int h, 
                         Uint32 flags);

void destroyWindow(SDL_Window* window);
						 
void hideWindow(SDL_Window* window);

void showWindow(SDL_Window* window);

int setWindowBrightness(SDL_Window* window, float brightness);

int showSimpleMessageBox(Uint32 flags, const char* title, const char* message,
                         SDL_Window* window);

const SDL_WindowFlags FULLSCREEN, OPENGL, SHOWN, HIDDEN, BORDERLESS, RESIZABLE,
                      MINIMIZED, MAXIMIZED, INPUT_GRABBED, INPUT_FOCUS, 
					  MOUSE_FOCUS, FULLSCREEN_DESKTOP , FOREIGN, ALLOW_HIGHDPI;
						
#endif // WINDOW_H