#include "raylib.h"

struct Game{
    
    void EnterMainLoop(){
        
        const int screenWidth = 800;
        const int screenHeight = 450;
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