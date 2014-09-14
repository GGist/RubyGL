#include "GLWindow.h"

const SDL_WindowFlags WINDOW_FULLSCREEN = SDL_WINDOW_FULLSCREEN,
                      WINDOW_OPENGL = SDL_WINDOW_OPENGL,
                      WINDOW_SHOWN = SDL_WINDOW_SHOWN, 
                      WINDOW_HIDDEN = SDL_WINDOW_HIDDEN,
                      WINDOW_BORDERLESS = SDL_WINDOW_BORDERLESS, 
                      WINDOW_RESIZABLE = SDL_WINDOW_RESIZABLE, 
                      WINDOW_MINIMIZED = SDL_WINDOW_MINIMIZED,
                      WINDOW_MAXIMIZED = SDL_WINDOW_MAXIMIZED, 
                      WINDOW_INPUT_GRABBED = SDL_WINDOW_INPUT_GRABBED, 
                      WINDOW_INPUT_FOCUS = SDL_WINDOW_INPUT_FOCUS,
                      WINDOW_MOUSE_FOCUS = SDL_WINDOW_MOUSE_FOCUS, 
                      WINDOW_FULLSCREEN_DESKTOP = SDL_WINDOW_FULLSCREEN_DESKTOP, 
                      WINDOW_FOREIGN = SDL_WINDOW_FOREIGN,
                      WINDOW_ALLOW_HIGHDPI = SDL_WINDOW_ALLOW_HIGHDPI;

void setGLAttributes(int majorVersion, int minorVersion, int depthSize, 
                     int doubleBuffer)
{
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, majorVersion);
	SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, minorVersion);

	SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, depthSize);
	SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, doubleBuffer);
}

SDL_Window* createGLWindow(int majorVersion, int minorVersion, int xPosition, 
                           int yPosition, int width, int height, 
                           const char* title, Uint32 windowFlags)
{
	setGLAttributes(majorVersion, minorVersion, 24, 1);

	SDL_Window* mainWindow = SDL_CreateWindow(
		title,
		xPosition,
		yPosition,
		width,
		height,
		windowFlags | SDL_WINDOW_OPENGL
	);

	return mainWindow;
}

SDL_GLContext createGLContext(SDL_Window* window)
{
	SDL_GLContext mainContext = SDL_GL_CreateContext(window);


	SDL_GL_MakeCurrent(window, mainContext);
	SDL_GL_SetSwapInterval(1);

	return mainContext;
}

Uint32 getCombinedFlags(int makeFullscreen, int makeFullscreenDesktop, 
                        int makeHidden, int makeBorderless, int makeResizable, 
                        int makeMinimized, int makeMaximized, int makeFocus, 
                        int makeHDPI)
{
	Uint32 flags = 0;
	
	if (makeFullscreen)
		flags |= SDL_WINDOW_FULLSCREEN;
		
	if (makeFullscreenDesktop)
		flags |= SDL_WINDOW_FULLSCREEN_DESKTOP;
		
	if (makeHidden)
		flags |= SDL_WINDOW_HIDDEN;
		
	if (makeBorderless)
		flags |= SDL_WINDOW_BORDERLESS;
		
	if (makeResizable)
		flags |= SDL_WINDOW_RESIZABLE;
		
	if (makeMinimized)
		flags |= SDL_WINDOW_MINIMIZED;
		
	if (makeMaximized)
		flags |= SDL_WINDOW_MAXIMIZED;
		
	if (makeFocus)
		flags |= SDL_WINDOW_INPUT_GRABBED;
		
	if (makeHDPI)
		flags |= SDL_WINDOW_ALLOW_HIGHDPI;
		
	return flags;
}