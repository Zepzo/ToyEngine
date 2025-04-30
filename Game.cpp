#include "raylib.h"
#include <vector>
#include "Object.cpp"

struct Game
{
    void EnterMainLoop()
    {
        const int screenWidth = 1000;
        const int screenHeight = 650;
        InitWindow(screenWidth, screenHeight, "ToyEngine");
        
        SetTargetFPS(60); 
        
        while (!WindowShouldClose())
        {
            BeginDrawing();
            ClearBackground(RAYWHITE);
            Tick();
            EndDrawing();
        }

        CloseWindow(); 
    }
    
    virtual void Tick() {};
};