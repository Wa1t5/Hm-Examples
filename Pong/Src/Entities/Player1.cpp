#include "../../../Deps/Hm/include/Game.hpp"

class Player1 : public Entity
{
public:
    int spd = 0;

    void Init() override
    {
        pos = new Vector2(0, 200);
        size = new Vector2(30, 150);
        spd = 10;
    }

    void LoadResources() override
    {

    }

    void Update() override
    {
        if (input->IsKeyDown(SDL_SCANCODE_W)) pos->_y -= spd;
        if (input->IsKeyDown(SDL_SCANCODE_S)) pos->_y += spd;

        // Limit
        if (pos->_y <= 0) pos->_y += spd;
        if (pos->_y >= 600 - size->_y) pos->_y -= spd;
    }
    
    void Render() override
    {
        Polygons::DrawCube(renderer, pos, size, 1);
    }
};