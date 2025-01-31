#ifndef RENDERER_H
#define RENDERER_H

#include "Player.h"

class Renderer {
public:
    void render(Player* dealer, Player* player, int state, bool hideDealerCard = true);
};

#endif