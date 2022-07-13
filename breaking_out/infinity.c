#include <stdio.h>

int main() {

    // creating a variable named number1 and initialized it to 1
    int number1 = 1; 
    // creating another variable named numbers_entered1 and initialized it to 0
    int numbers_entered1 = 0; 
    int number2 = 1; 
    int numbers_entered2 = 0;

    // creating a while-loop that runs as long as numbers_entered1 is less than 10
    // numbers_entered1 gets incremented by one each time the loop is is run 
    while (numbers_entered1 < 10)
    {
        // a print statment that ask the user to entere a number
        printf("Loop 1 - Please enter a number: ");
        // a scanf reads a number and stores in in the number1 variable
        // note that number1 value is updated to whatever the user types. inputs
        scanf("%d", &number1); 

        // Figure out how to break out here!
        if (number1 <= 0)
        {
            break;
        }
        

        // incrementing numbers_entered1 by one
        numbers_entered1++;
    }

    // second while loop
    while (number2 > 0 && numbers_entered2 < 10 )
    {
        printf("Loop 2: Please enter a number: "); 
        scanf("%d", &number2); 
        numbers_entered2++;
    }
    

    printf("Good job! You've broken out!\n");
    
}