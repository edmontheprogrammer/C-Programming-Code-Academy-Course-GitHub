#include <stdio.h>

int main() {

    // Creating a variable name guess
    int guess; 
    // creating a variable named tries and setting it to 0
    int tries = 0; 

    // a print statment informing the user "I'm thinking of a number in the range 1-10"
    printf("I'm thinking of a number in the range 1-10.\n"); 
    // a print statment telling the user to try and guess the number
    printf("Try to guess it: "); 
    // scanf is a function that reads data from the user 
    // in this case it's getting the value of guess
    scanf("%d", &guess); 

    // Write a while loop here
    // this line repeats as long as guess is not equal to 8
    while (guess != 8 && tries < 50)
    {
        printf("Wrong guess, try again: ");
        scanf("%d", &guess); 
        tries++; 
    }
    
    // this statment is executed or run if guess is 8 
    if (guess == 8) {

        printf("You got it!\n"); 

    }
}