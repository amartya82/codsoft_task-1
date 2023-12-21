#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    
    srand(static_cast<unsigned int>(time(0)));

    int secretNumber = rand() % 100 + 1;
    int guess, attempts = 0;
    
    std::cout << "Welcome to the Number Guessing Game! \n" << std::endl;

    while (true) {
        std::cout << "Guess the number (between 1 and 100): ";
        std::cin >> guess;
    
        if (guess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number." << std::endl;
            break;
        } else if (guess < secretNumber) {
            std::cout << "Too low! Try guessing a higher number." << std::endl;
        } else {
            std::cout << "Too high! Try guessing a lower number." << std::endl;
        }
    }

    return 0;
}

