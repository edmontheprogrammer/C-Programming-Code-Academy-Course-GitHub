#include <stdio.h>

int main() {

    int number = 7; 

    switch (number)
    {
    case 1:
        printf("Bulbasaur\n");
        break;
    case 2:
        printf("Inysaur\n");
        break;
    case 3: 
        printf("Venusaur\n"); 
        break;
    case 4:
        printf("Charmander\n");
        break;
    case 5:
        printf("Charmleon\n");
        break;
    case 6: 
        printf("Charizard\n");
        break;
    case 7:
        printf("Squirtle\n");
    case 8:
        printf("Wartortle\n"); 
        break;
    case 9:
        printf("Blastoise\n");
        break;
    default:
        printf("Uknown\n");
        break;
    }
}