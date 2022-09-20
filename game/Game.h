#ifndef GAME_H
#define GAME_H

#include "engine.h"
#include "Player.h"
#include <SDL.h>

typedef struct Game {
    Player player;
    SDL_Texture* background;
    SDL_Rect srcRect;
    SDL_Rect destRect;
    char fps[10];
} Game;

void InitGame(Game* game, Engine* engine);
void FreeGame(Game* game);

void GameHandleEvent(Game* game, Engine* engine, SDL_Event* e);
void UpdateGame(Game* game, Engine* engine, const Uint8* keyStates);

#endif