#include "../../../Deps/Hm/include/Game.hpp"

class Ball : public Entity
{
public:
    Vector2* dir = nullptr;
    int spd = 0;

    void Init() override
    {
        pos = new Vector2(400, 300);
        dir = new Vector2(0, 0);
        size = new Vector2(20, 20);
        spd = 8;    

        dir->_x = rand() % 2;
        dir->_y = rand() % 2;

        if (dir->_x == 0) dir->_x = -1;
    }

    void LoadResources() override
    {

    }

    void Update() override
    {
        if (dir->_y == 0) dir->_y = -1;

        if (pos->_y <= 0) dir->_y = 1;
        else if (pos->_y >= 600) dir->_y = -1;

        pos->_x += dir->_x * spd;
        pos->_y += dir->_y * spd;
    }
    
    void Render() override
    {
        Polygons::DrawCube(renderer, pos, size, 1);
    }
};