#pragma once
#include "EventMediator.hpp"

class Player {
private:
    EventMediator& mediator;
    Enemy& enemy;
public:
    Player(EventMediator& mediator, Enemy& enemy);
    void attack();
};
