#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    char ch;

    for(i=0;i<5;i++)
    {
       ch='A';
        ch=ch+i;

        for(j=0;j<5-i;j++)
        {
           printf("%c\t",ch);
           ch++;
        }
        printf("\n");

    }
    return 0;
}
