#include <iostream>
#include <cstdlib>
#include <ctime>

int main() 
{
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
    int secretNumber = std::rand() % 100 + 1;
    int guess;
    std::cout << "Guess the number (between 1 and 100):\n";
    
    while (true) {
        std::cout << "Enter your guess: ";
        std::cin >> guess;

        if (guess < 1 || guess > 100) 
        {
            std::cout << "Please enter a number between 1 and 100.\n";
            continue;
        }

        if (guess == secretNumber) 
        {
            std::cout << "Congratulations! You guessed the correct number.\n";
            break;
        } else if (guess < secretNumber) 
        {
            std::cout << "Too low. Try again.\n";
        } else 
        {
            std::cout << "Too high. Try again.\n";
        }
    }

    return 0;
}