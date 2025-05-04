#ifndef UI_H
#define UI_H

#include "IObserver.h"
#include "Player.h"
#include "Enemy.h"
#include <iostream>

class UI : public IObserver<Player>, public IObserver<Enemy> {
public:
    void update(Player* player) override {
        std::cout << "Player attack! Updating UI" << std::endl;
    }

    void update(Enemy* enemy) override {
        std::cout << "Enemy health: " << enemy->getHealth() << std::endl;
        if (enemy->getHealth() <= 0) {
            std::cout << "Enemy defeated! Player Win!" << std::endl;
        }
    }
};

#endif // UI_H
