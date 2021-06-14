//  main.cpp
//
//  Simple Guessing Game
//
//  Created by D-R-H on 6/13/21.

#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    srand((unsigned) time(0));
    int secretNum = (rand() % 10) + 1;
    int guess;
    int guessCount = 0;
    int guessLimit = 3;
    int remainingGuesses = 3;
    bool outOfGuesses = false;
    std::string tryAgain1 = "You Have ";
    std::string tryAgain2 = " Guesses Left ";
    
    while(secretNum != guess && !outOfGuesses) {
        if(guessCount < guessLimit) {
            std::cout << "Please Guess A Number Between 1 And 10: ";
            std::cin >> guess;
            guessCount++;
            remainingGuesses--;
            std::cout << tryAgain1 << remainingGuesses << tryAgain2;
        } else {
            outOfGuesses = true;
        }
    }
    if(outOfGuesses) {
        std::cout << "You Lose!";
    } else {
        std::cout << "You Win!";
    }
    return 0;
}
