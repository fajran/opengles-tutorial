#include <SDL/SDL.h>

int main(int argc, char** argv) {
  const int width = 1024;
  const int height = 768;
  const int depth = 32;

  // Prepare SDL
  SDL_Init(SDL_INIT_EVERYTHING);
  SDL_SetVideoMode(width, height, depth,
                   SDL_HWSURFACE | SDL_GL_DOUBLEBUFFER | SDL_OPENGL);

  SDL_Event event;

  bool running = true;
  while (running) {
    // Check for incoming event
    while (SDL_PollEvent(&event)) {
      if (event.type == SDL_KEYUP &&
          event.key.keysym.sym == SDLK_ESCAPE) {
        running = false;
      }
    }

    // Swap buffer
    SDL_GL_SwapBuffers();
  }

  SDL_Quit();

  return 0;
}

