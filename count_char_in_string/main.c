#include <stdio.h>
#include <stdlib.h>

int main()
{
    int count=0,i;
    char str[80],ch;
    printf("enter any string\n");
    gets(str);
    printf("enter character to be counted\n");
    ch=getchar();
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
            count++;
    }
    printf("total number of character=%d",count);
    return 0;
}
