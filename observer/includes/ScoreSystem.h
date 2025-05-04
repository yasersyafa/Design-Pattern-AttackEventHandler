#ifndef SCORESYSTEM_H
#define SCORESYSTEM_H

#include "IObserver.h"
#include <iostream>

class ScoreSystem : public IObserver {
private:
    int enemyHealth = 100;
public:
    void update() override;
};

#endif // SCORESYSTEM_H
