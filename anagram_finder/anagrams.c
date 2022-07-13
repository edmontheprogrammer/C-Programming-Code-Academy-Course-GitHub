#include <stdio.h>
#include <string.h>

int main()
{
    int counter1[] = {0, 0, 0, 0};
    int counter2[] = {0, 0, 0, 0}; 
    int flag = 0;

    char s1[] = {'d','b','b',' ', 'c','c','c','c','c','a','a','c','b',' ',
    'c','d','b','a','b','a','b','d','c','d','c','d','a','b',' ','d','c','d','a','d'};
    char s2[] = {'b','b','b','c','c',' ','b','d','d','d','c','c','c','c','a','d',
     ' ','c','d','b','b','a','a','a','c','a','c','c','d','a','b','d','d'}; 

     for (int  i = 0; i < strlen(s1); i++)
     {
        if (s1[i] == 'a')
        {
            counter1[0]++;
        } else if (s1[i] == 'b')
        {
            counter1[1]++; 
        } else if (s1[i] == 'c')
        {
            counter1[2]++;
        } else if (counter1[i] == 'd')
        {
            counter1[3]++;  
        } else {
            printf("ignore the white space");
        }
        
     }

     for (int i = 0; i < strlen(s2); i++)
     {
        if (s2[i] == 'a')
        {
            counter2[0]++;
        } else if (s2[i] == 'b')
        {
            counter2[1]++;  
        } else if (s2[i] == 'c')
        {
            counter2[2]++;
        } else if (s2[i] == 'd')
        {
            counter2[3]++;
        } else {
            printf("Ignore white spaces 2");
        }
     }

     for (int i = 0; i < sizeof(counter1)/ sizeof(int); i++)
     {
        if (counter1[i] != counter2[i])
        {   
            flag = 1;
            printf("Not Anagram!");
        } else {
            printf("Anagram!"); 
        }
        {
        }
        
        
     }
     
     
}