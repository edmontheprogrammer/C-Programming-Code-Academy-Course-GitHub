#include <stdio.h>

int main() {

    // creating a character variable 
    char targetChar; 
    // creating an integer variable and initialzing it to 99
    int sourceInt = 99; 
    // creating a double variable named sourceDouble and 
    // initializing it to 55.67
    double sourceDouble = 55.67; 

    // Cast here
    // Setting targetChar to sourceInt or a character variable to 
    // integer variable and convertin the integer variable to 
    // character variable. targetChar now should give us the character 
    // version of sourceInt, 99 which is c. 
    targetChar = (char) sourceInt; 

    // setting targetChar to sourceDouble or 
    // converting character to double using implict casting 
    targetChar = sourceDouble; 

    // No need to change below here
    printf("Source int %d, source double, %.2f, target %c\n", 
    sourceInt, sourceDouble, targetChar); 

}