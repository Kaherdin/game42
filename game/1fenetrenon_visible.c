//
//  test.c
//  Game42
//
//  Created by Daniel arthur Ndoum bileg on 9/18/21.
//

#include "test.h"

int main(int argc, char *argv[])
{
    SDL_Window *window = NULL, *window2 = NULL;
    if(0 != SDL_Init(SDL_INIT_VIDEO))
    {
        fprintf(stderr, "Erreur SDL_Init : %s", SDL_GetError());
        return EXIT_FAILURE;
    }
    window = SDL_CreateWindow("SDL2", 100, 100,
                              640, 480, SDL_WINDOW_SHOWN);
    if(NULL == window)
    {
        fprintf(stderr, "Erreur SDL_CreateWindow : %s", SDL_GetError());
        return EXIT_FAILURE;
    }
    window2 = SDL_CreateWindow("SDL2", 700, 500,
                               640, 480, SDL_WINDOW_SHOWN);
    if(NULL == window2)
    {
        fprintf(stderr, "Erreur SDL_CreateWindow 2 : %s", SDL_GetError());
        return EXIT_FAILURE;
    }
    SDL_Delay(3000);
    SDL_DestroyWindow(window);
    SDL_DestroyWindow(window2);
    SDL_Delay(3000);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return EXIT_SUCCESS;
}
