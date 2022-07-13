#include <stdio.h>

int main() {

    int endingDayOfWeek = 0; 
    int daysThatPass = 9; 
    int dayInWeek = 7; 
    endingDayOfWeek = daysThatPass % dayInWeek; 

    printf("You started on the 1st (0) day of the week, went %d days from this, so it is now the %d day of the week\n", daysThatPass, endingDayOfWeek); 
}