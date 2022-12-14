#ifndef MAIN_MENU_H
#define MAIN_MENU_H

#include "engine.h"
#include "Ui.h"
#include <stdbool.h>

typedef enum MainMenuSelection {
    MainMenuPlay = 0,
    MainMenuEditor = 1,
    MainMenuQuit = 2
} MainMenuSelection;

typedef struct MainMenu {
    UiOption uiOption;
    SDL_Rect drawRect;
} MainMenu;

void InitMainMenu(MainMenu* mainMenu, Engine* engine);
void FreeMainMenu(MainMenu* mainMenu);

void MainMenuHandleEvent(MainMenu* mainMenu, Engine* engine, SDL_Event* e);
bool UpdateMainMenu(MainMenu* mainMenu, Engine* engine);

#endif