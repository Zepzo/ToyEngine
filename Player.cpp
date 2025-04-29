#include "raylib.h"
#include "Object.cpp"

struct Player : public Object
{
    Vector2 pos = {400, 200};
    int radius = 30;
    
    void Uppdate() override
    {
        if(IsKeyDown(KEY_W))
        {
            pos.y--;
        }
        else if(IsKeyDown(KEY_S))
        {
            pos.y++;
        }
        
        if(IsKeyDown(KEY_D))
        {
            pos.x++;
        }
        else if(IsKeyDown(KEY_A))
        {
            pos.x--;
        }
        
        DrawCircleV(pos, radius, GREEN);
    }
};