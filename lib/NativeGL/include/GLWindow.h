#ifndef GLWINDOW_H
#define GLWINDOW_H

#include "SDL.h"

int loadLibrary() {
  return SDL_GL_LoadLibrary(NULL);
}
SDL_Window* createGLWindow(int majorVersion, int minorVersion, int xPosition, 
                           int yPosition, int width, int height, 
                           const char* title, Uint32 windowFlags);
SDL_GLContext createGLContext(SDL_Window* window);

void setGLAttributes(int majorVersion, int minorVersion, int depthSize, 
                     int useDoubleBuffer);
Uint32 getCombinedFlags(int makeFullscreen, int makeFullscreenDesktop, 
                        int makeHidden, int makeBorderless, int makeResizable, 
                        int makeMinimized, int makeMaximized, int makeFocus, 
                        int makeHDPI);

void swapBuffer(SDL_Window* window)
{
	SDL_GL_SwapWindow(window);
}
						
#endif // GLWINDOW_H