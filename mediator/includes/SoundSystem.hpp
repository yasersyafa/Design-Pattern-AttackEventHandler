#pragma once
#include "IEventListener.hpp"
#include "Enemy.hpp"

class SoundSystem : public IEventListener {
public:
    void onAttack(Enemy* enemy) override;
};
