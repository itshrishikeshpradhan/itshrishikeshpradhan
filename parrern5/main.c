#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,j;
    char ch;

    for(i=1;i<=5;i++)
    {

         ch='A';
        for(j=1;j<=6-i;j++)
        {
           printf("%c\t",ch);
           ch++;
        }
        printf("\n");


    }
    return 0;
}
