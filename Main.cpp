#include "raylib.h"
#include "Game.cpp"

struct MainGame : public Game
{
    void Tick() override
    {
        DrawText("Test", 8, 8, 20, BLACK);
    }
};

int main(void)
{
    MainGame mainGame;
    
    mainGame.EnterMainLoop();
    
    return 0;
}