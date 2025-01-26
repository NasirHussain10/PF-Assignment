#include <stdio.h>
#include <stdlib.h>

void printInstructions() {
    printf("Welcome to the Guessing Game!\n");
    printf("Instructions:\n");
    printf("1. The computer has selected a number between 1 and 100.\n");
    printf("2. You have 4 chances to guess the number.\n");
    printf("3. After each guess, you will get a hint if your guess is too low or too high.\n");
    printf("4. After each round, you can choose to play again or exit.\n\n");
}

int main() {
    int number, guess, attempts, playAgain;
    
    srand((unsigned int)time(NULL)); // Initialize random number generator
    
    printInstructions();
    
    do {
        number = rand() % 100 + 1; // Random number between 1 and 100
        
        attempts = 0;
        
        while (attempts < 4) {
            printf("Attempt %d: Enter your guess (between 1 and 100): ", attempts + 1);
            scanf("%d", &guess);
            
            if (guess < number) {
                printf("Your guess is too small.\n");
            } else if (guess > number) {
                printf("Your guess is too large.\n");
            } else {
                printf("Congratulations! You guessed the number correctly!\n");
                break;
            }
            attempts++;
        }
        
        if (attempts == 4 && guess != number) {
            printf("Sorry, you've used all attempts. The correct number was %d.\n", number);
        }
        
        printf("Do you want to play again? (1 for Yes, 0 for No): ");
        scanf("%d", &playAgain);
        
    } while (playAgain == 1);
    
    printf("Thanks for playing! Goodbye!\n");
    
    return 0;
}

