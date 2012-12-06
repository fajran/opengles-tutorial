#include <SDL/SDL.h>

#include <GLES2/gl2.h>

void init_opengl() {
  glClearColor(0xCD / 255.0, 0xD7 / 255.0, 0xB6 / 255.0, 1.0);
}

void update_opengl() {

}

void draw_opengl() {
  glClear(GL_COLOR_BUFFER_BIT);
}

int main(int argc, char** argv) {
  const int width = 1024;
  const int height = 768;
  const int depth = 32;

  // Prepare SDL
  SDL_Init(SDL_INIT_EVERYTHING);
  SDL_SetVideoMode(width, height, depth,
                   SDL_HWSURFACE | SDL_GL_DOUBLEBUFFER | SDL_OPENGL);

  SDL_Event event;

  init_opengl();

  bool running = true;
  while (running) {
    update_opengl();
    draw_opengl();

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

