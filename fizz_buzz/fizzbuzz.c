#include <stdio.h>

/*

    * Write a fizzbuzz.c program that outputs numbers from 1 to 100.
    * But for multiples of 3, print Fizz instead of the number and for 
       for the multiples of 5, print Buzz. 
    * For numbers which are multiples of both 3 and 5, print FizzBuzz
 */

int main() 
{
    int limit = 100; 

    for (int number =  1; number <= limit; number++) 
    {
        if (number % 15 == 0) {
            /*
                * We choose to divide by 15 here because number divisble by 3 
                and 5 will always be divisiable by 15, print 'FizzBuzz' in place of 
                the number
            */
            printf("FizzBuzz\n");
        } 
        else if (number % 3 == 0)
        {
            printf("Fizz\n");
        } else if (number % 5 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", number);
        }
        
    }

}