#include "../includes/ScoreSystem.h"
#include <iostream>

void ScoreSystem::update() {
    ScoreSystem::enemyHealth -= 10; // Simulate damage
    if (ScoreSystem::enemyHealth <= 0) {
        std::cout << "Score Added because Enemy Dead\n";
    }
    std::cout << "Score updated!" << std::endl;
}