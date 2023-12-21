#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int guess, attempts = 0;
    
    std::cout << "Welcome to the Number Guessing Game! \n" << std::endl;
    
    // Keep asking the user to guess until they get the correct number
    while (true) {
        std::cout << "Guess the number (between 1 and 100): ";
        std::cin >> guess;
        
        // Check if the guess is correct
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

