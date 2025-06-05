#include "raylib.h"
#include "Game.cpp"
#include "Player.cpp"

// testpush

struct MainGame : public Game
{
    Player player;
    
    void Tick() override
    {
        DrawText("ToyEngine", 8, 8, 20, BLACK);
        
        player.Uppdate();
    }
};

int main(void)
{
    MainGame mainGame;
    
    mainGame.EnterMainLoop();
    
    return 0;
}