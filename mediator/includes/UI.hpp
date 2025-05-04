#pragma once
#include "IEventListener.hpp"
#include "Enemy.hpp"
#include <iostream>

class UI : public IEventListener {
public:
    void onAttack(Enemy* enemy) override;
};
