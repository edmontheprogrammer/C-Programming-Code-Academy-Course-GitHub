#include <stdio.h>

int main() {

    int i = 99; 

/*
    // Write your loop here
    while (i >= 0)
    {
        printf("%d bottles of pop on the wall.\n", i);
        printf("Take one down and pass it around.\n");
        printf("%d bottles of pop on the wall.\n", i - 1); 
        i--;
    }*/

    for (int i = 99; i >= 0; i--) {
        printf("%d bottles of pop on the wall.\n", i);
        printf("Take one down and pass it around.\n"); 
        printf("%d bottles of pop on the wall.\n", i - 1); 
    }
    


}