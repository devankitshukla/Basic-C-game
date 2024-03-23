#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numberToGuess, playerGuess, attempts = 0;

    // Seed for random number generation
    // srand function in C is used to seed the pseudo-random number generator (rand). 
    //The seed is an initial value that determines the sequence of random numbers generated by rand
    srand(time(0));

    // Generate a random number between 1 and 100
    numberToGuess = rand() % 100 + 1;

    printf("Welcome to the Guess the Number game!\n");
    printf("Try to guess the number between 1 and 100.\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &playerGuess);

        attempts++;

        if (playerGuess > numberToGuess) {
            printf("Too high! Try again.\n");
        } else if (playerGuess < numberToGuess) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (playerGuess != numberToGuess);

 
    return 0;
    /* The do-while loop allows the player to make a guess, receive feedback on the guess, and continue the loop until the correct number is guessed. The loop guarantees that the player gets at least one chance to guess the number.
       The condition while (playerGuess != numberToGuess) ensures that the loop continues until the player guesses the correct number. 
       Without the do-while loop, if the player guesses the number correctly on the first try, the loop would not execute, and the player might not receive any feedback or indication that they guessed correctly.*/
}
