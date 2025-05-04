#include <iostream>
#include "includes/GameContext.h"

GameContext setupGame();

void startGame(GameContext& context) {
    std::string input;
    std::cout << "Ketik 'space' lalu tekan ENTER untuk menyerang (atau 'exit' untuk keluar):\n";

    while (true) {
        std::cout << "> ";
        std::cin >> input;

        if (input == "space") {
            context.player.attack();
            context.enemy.takeDamage(50); // Simulate enemy taking damage
        } else if (input == "exit") {
            break;
        } else {
            std::cout << "Input tidak dikenali. Ketik 'space' atau 'exit'.\n";
        }
    }
}

int main() {
    GameContext context = setupGame();
    startGame(context);
    return 0;
}
