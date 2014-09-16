#ifndef GLCONTEXT_H
#define GLCONTEXT_H

#include "SDL.h"

int loadLibrary(const char* path);

void unloadLibrary(void);

SDL_GLContext createContext(SDL_Window* window);

void deleteContext(SDL_GLContext context);

int setAttribute(SDL_GLattr attr, int value);

int makeCurrent(SDL_Window* window, SDL_GLContext context);

int setSwapInterval(int interval);

void swapWindow(SDL_Window* window);

const SDL_GLattr RED_SIZE, GREEN_SIZE, BLUE_SIZE, ALPHA_SIZE, BUFFER_SIZE,
                 DOUBLEBUFFER, DEPTH_SIZE, STENCIL_SIZE, ACCUM_RED_SIZE,
				 ACCUM_GREEN_SIZE, ACCUM_BLUE_SIZE, ACCUM_ALPHA_SIZE, STEREO,
				 MULTISAMPLEBUFFERS, MULTISAMPLESAMPLES, ACCELERATED_VISUAL,
				 CONTEXT_MAJOR_VERSION, CONTEXT_MINOR_VERSION, CONTEXT_FLAGS,
				 CONTEXT_PROFILE_MASK, SHARE_WITH_CURRENT_CONTEXT,
				 FRAMEBUFFER_SRGB_CAPABLE;

const SDL_GLcontextFlag CONTEXT_DEBUG_FLAG, CONTEXT_FORWARD_COMPATIBLE_FLAG,
                        CONTEXT_ROBUST_ACCESS_FLAG, 
						CONTEXT_RESET_ISOLATION_FLAG;

const SDL_GLprofile CONTEXT_PROFILE_CORE, CONTEXT_PROFILE_COMPATIBILITY,
                    CONTEXT_PROFILE_ES;
				 
#endif // GLCONTEXT_H