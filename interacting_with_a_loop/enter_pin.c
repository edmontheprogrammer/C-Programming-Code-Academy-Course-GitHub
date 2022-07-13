#include <stdio.h>

int main() {
    // create an integer variable named pin and initialzied it to 0
    int pin = 0;
    // create an integer named tries and set it to 0
    int tries = 0; 

    // a print statment that outputs "Bank of Code Academy"
    printf("BANK OF CODEACADEMY:\n"); 
    // a print statement asking the user to enter their pin
    printf("Enter your PIN: "); 
    // scanf is a function that reads input from the user 
    // in this case, it's reading the pin value as an integer 
    scanf("%d", &pin); 

    // increasing tries variable by one
    tries++; 

    // creating a while loop that runs or repeats as long as pin is not 
    // 1234 and number of is less than 
    while (pin != 1234 && tries < 3)
    {
        // ask the user to enter their pin
        printf("Enter your PIN: ");
        // reading input from the user, pin from the user 
        scanf("%d", &pin); 
        // increasing number of tries by 1
        tries++; 
    }

    /*
        an if statment that checks if pin is 1234
        than print PIN accepted and you now have acccess 
    */
    if (pin == 1234)
    {
        printf("PIN accepted!\n");
        printf("You now have access.\n");
    }
    
    
}