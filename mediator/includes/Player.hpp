#pragma once
#include "GameEventMediator.hpp"

class Player {
public:
    Player(GameEventMediator& mediator);
    void attack();

private:
    GameEventMediator& mediator;
};
