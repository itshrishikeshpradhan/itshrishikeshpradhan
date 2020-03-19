#include <stdio.h>
#include <stdlib.h>

int main()
{
      int count=0,i;
    char str[80],ch;
    printf("enter any string\n");
    gets(str);
    printf("enter character till counted\n");
    ch=getchar();
    for(i=0;str[i]!=ch;i++)
    {
            count++;
    }
    printf("position of character=%d",count+1);
    return 0;
}
