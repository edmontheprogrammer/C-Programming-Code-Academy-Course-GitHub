#include <stdio.h>

int main(void) {
    int month, day, year; 

    // Standard date form
    printf("Enter date ()");
    // Split the user input into 3 variables for the date
    // Don't worry about the 'scanf()' below, you'll learn more about these later!
    scanf("%d %d %d", &month, &day, &year); 

    switch (month)      
    {
    case 1:
        printf("January"); 
        break;
    case 2:
        printf("February");
        break;
    case 3:
        printf("March");
        break;
    case 4:
        printf("April");
        break;
    case 5:
        printf("May");
        break;
    case 6:
        printf("June");
        break;
    case 7:
        printf("July");
        break;
    case 8:
        printf("August");
        break;
    case 9:
        printf("September"); 
        break;
    case 10:
        printf("October");
        break;
    case 11:
        printf("November");
        break;
    case 12:
        printf("December");
        break;
    default:
        printf("Unknown month"); 
        break;
    }

    // Print the month
    printf("%d\n", month);

    // Print the day
    printf("%d\n", day);

    // Print the suffix for a given day
    /*
        1 ; 1st 
        2 ; 2nd
        3 ; 3rd 
        4 ; 4th 
        5 ; 5th 
        6 ; 6th 
        7 ; 7th 

        ... 
    */


    // Print the year
    printf("%d\n", year); 

    return 0; 
}