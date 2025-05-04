#include <iostream>
#include "includes/Player.h"
#include "includes/Enemy.h"
#include "includes/UI.h"
#include "includes/SoundSystem.h"
#include "includes/ScoreSystem.h"

int main() {
    Player player;
    Enemy enemy;

    UI ui;
    SoundSystem soundSystem;
    ScoreSystem scoreSystem;

    player.attach(&ui);
    player.attach(&soundSystem);

    enemy.attach(&soundSystem);
    enemy.attach(&scoreSystem);
    enemy.attach(&ui);


    std::string input;
    std::cout << "Ketik 'space' lalu tekan ENTER untuk menyerang (atau 'exit' untuk keluar):\n";

    while (true) {
        std::cout << "> ";
        std::cin >> input;

        if (input == "space") {
            player.attack();
            enemy.takeDamage(50); // Simulate enemy taking damage
        } else if (input == "exit") {
            break;
        } else {
            std::cout << "Input tidak dikenali. Ketik 'space' atau 'exit'.\n";
        }
    }

    return 0;
}
