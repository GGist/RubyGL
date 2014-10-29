#include "Window.h"

const SDL_WindowFlags FULLSCREEN = SDL_WINDOW_FULLSCREEN,
    OPENGL = SDL_WINDOW_OPENGL,
    SHOWN = SDL_WINDOW_SHOWN, 
    HIDDEN = SDL_WINDOW_HIDDEN,
    BORDERLESS = SDL_WINDOW_BORDERLESS, 
    RESIZABLE = SDL_WINDOW_RESIZABLE, 
    MINIMIZED = SDL_WINDOW_MINIMIZED,
    MAXIMIZED = SDL_WINDOW_MAXIMIZED, 
    INPUT_GRABBED = SDL_WINDOW_INPUT_GRABBED, 
    INPUT_FOCUS = SDL_WINDOW_INPUT_FOCUS,
    MOUSE_FOCUS = SDL_WINDOW_MOUSE_FOCUS, 
    FULLSCREEN_DESKTOP = SDL_WINDOW_FULLSCREEN_DESKTOP, 
    FOREIGN = SDL_WINDOW_FOREIGN,
    ALLOW_HIGHDPI = SDL_WINDOW_ALLOW_HIGHDPI;

int initWindow()
{
    return SDL_InitSubSystem(SDL_INIT_VIDEO);
}

void quitWindow()
{
    SDL_QuitSubSystem(SDL_INIT_VIDEO);
}
    
SDL_Window* createWindow(const char* title, int x, int y, int w, int h, 
                         Uint32 flags)
{
    return SDL_CreateWindow(title, x, y, w, h, flags);
}

void destroyWindow(SDL_Window* window)
{
    SDL_DestroyWindow(window);
}
                         
void hideWindow(SDL_Window* window)
{
    SDL_HideWindow(window);
}

void showWindow(SDL_Window* window)
{
    SDL_ShowWindow(window);
}

int setWindowBrightness(SDL_Window* window, float brightness)
{
    return SDL_SetWindowBrightness(window, brightness);
}

int showSimpleMessageBox(Uint32 flags, const char* title, const char* message,
                         SDL_Window* window)
{
    return SDL_ShowSimpleMessageBox(flags, title, message, window);
}
                      
/* void setGLAttributes(int majorVersion, int minorVersion, int depthSize, 
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
 */