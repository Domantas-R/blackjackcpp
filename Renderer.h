#ifndef RENDERER_H
#define RENDERER_H

#include "Player.h"

class Renderer {
public:
    void render(const Player& dealer, const Player& player, int state, bool hideDealerCard = true);
};

#endif