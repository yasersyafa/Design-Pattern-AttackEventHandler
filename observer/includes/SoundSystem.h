#ifndef SOUNDSYSTEM_H
#define SOUNDSYSTEM_H

#include "IObserver.h"
#include "Player.h"
#include "Enemy.h"
#include <iostream>

class SoundSystem : public IObserver<Player>, public IObserver<Enemy> {
public:
    void update(Player* player)override {
        std::cout << "Player says: Rasakan Ini!!!!" << std::endl;
    }

    void update(Enemy* enemy) override {
        std::cout << "Enemy says: Aaarghhh!!!" << std::endl;
    }
};

#endif // SOUNDSYSTEM_H
