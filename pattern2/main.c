#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    char ch;
    ch='E';
    for(i=1;i<=5;i++)
    {


        for(j=1;j<=i;j++)
        {
           printf("%c\t",ch);
           ch++;
        }
        printf("\n");
         ch=ch-i-1;

    }

    return 0;
}
