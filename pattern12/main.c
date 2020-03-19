#include <stdio.h>
#include <stdlib.h>

int main()
{
     int i,j;
    char ch;
 ch='A';
    for(i=0;i<5;i++)
    {

       for(j=0;j<5-i;j++)
        {
           printf("%c",ch);

        }
        printf("\n");
ch++;
    }
    return 0;
}
