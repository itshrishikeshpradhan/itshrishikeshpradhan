#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int count=0,i;
    char str[80],ch;
    printf("enter any string\n");
    gets(str);
    printf("enter character \n");
    ch=getchar();
    for(i=strlen(str);str[i]!=ch;i--)
    {
            count++;
    }
    printf("position of character=%d",(strlen(str)-count+1));
    return 0;
}
