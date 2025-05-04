#ifndef SCORESYSTEM_H
#define SCORESYSTEM_H

#include "IObserver.h"
#include <iostream>

class ScoreSystem : public IObserver {
private:
    int enemyHealth = 100;
public:
    void update() override {
        // Simulasi damage
        enemyHealth -= 10;
        if (enemyHealth <= 0) {
            std::cout << "Score Added if Enemy Dead\n";
        }
    }
};

#endif // SCORESYSTEM_H
