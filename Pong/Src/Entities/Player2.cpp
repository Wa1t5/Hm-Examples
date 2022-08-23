#include "../../../Deps/Hm/include/Game.hpp"

class Player2 : public Entity
{
public:
    //Vector2* pos = nullptr;
    //Vector2* size = nullptr;
    int spd = 0;

    void Init() override
    {
        pos = new Vector2(770, 200);
        size = new Vector2(30, 150);
        spd = 10;
    }

    void LoadResources() override
    {

    }

    void Update() override
    {
        if (input->IsKeyDown(SDL_SCANCODE_UP)) pos->_y -= spd;
        if (input->IsKeyDown(SDL_SCANCODE_DOWN)) pos->_y += spd;

        // Limit
        if (pos->_y <= 0) pos->_y += spd;
        if (pos->_y >= 600 - size->_y) pos->_y -= spd;
    }
    
    void Render() override
    {
        Polygons::DrawCube(renderer, pos, size, 1);
    }
};