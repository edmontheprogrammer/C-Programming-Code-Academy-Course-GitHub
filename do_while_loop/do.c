#include <stdio.h>

int main() {

    int i = 11; 
    
    while (i < 10)
    {
        printf("%d\n", i); 
        i++;
    } 

    // convert to do while loop
    do {
        printf("%d\n", i);
        i++; 
    } while (i < 10);
    
    
}