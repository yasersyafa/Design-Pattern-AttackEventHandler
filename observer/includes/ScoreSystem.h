#ifndef SCORESYSTEM_H
#define SCORESYSTEM_H

#include "IObserver.h"
#include "Enemy.h"
#include <iostream>

class ScoreSystem : public IObserver<Enemy> {
private:
    int score = 0;
public:

    void update(Enemy* enemy) override {
        if (enemy->getHealth() <= 0) {
            std::cout << "Enemy defeated! Player Win!" << std::endl;
            score += 100; // Example score increment
            std::cout << "Score: " << score << std::endl;
            resetGame();
        }
    }

    void resetGame() {
        std::cout << "Game reset!" << std::endl;
    }
};

#endif // SCORESYSTEM_H
