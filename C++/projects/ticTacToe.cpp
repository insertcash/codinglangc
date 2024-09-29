#include <iostream>

// quick project hopefully

int main() {
    // pre-run variables
    bool playing = true;
    bool doIntro = true;
    bool xTurn = true;

    // main loop
    while (playing) {
        // readying board spaces, this could be more efficient
        char space1 = "1";
        char space2 = "2";
        char space3 = "3";
        char space4 = "4";
        char space5 = "5";
        char space6 = "6";
        char space7 = "7";
        char space8 = "8";
        char space9 = "9";

        // intro
        if (doIntro) {
            std::cout << "Welcome to Tic Tac Toe!" << std::endl;
            std::cout << "This is a two player game, X will go first." << std::endl;
            std::cout << "Press keys 1-9 to place your marker in your preferred space." << std::endl;
            std::cout << "Play automatically switches between X and O." << std::endl;
            std::cout << "Press [enter] to start!" << std::endl;
            std::cin.get();
        }

        // game logic
        // todo: make actual game

    }
}