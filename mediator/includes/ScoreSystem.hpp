#pragma once
#include "IEventListener.hpp"
#include "Enemy.hpp"
#include <iostream>

class ScoreSystem : public IEventListener {
public:
    void onAttack(Enemy* enemy) override;
};
