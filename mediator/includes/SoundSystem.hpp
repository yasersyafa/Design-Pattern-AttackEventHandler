#pragma once
#include "IEventListener.hpp"
#include <iostream>

class SoundSystem : public IEventListener {
public:
    void onAttack(Enemy* enemy) override;
};
