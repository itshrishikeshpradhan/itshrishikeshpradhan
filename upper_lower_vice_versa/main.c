#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    int i;
    char str[80];
    printf("enter any string\n");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(isalpha(str[i]))
        {
           if(islower(str[i]))
          str[i]=toupper(str[i]);
           else
             str[i]=tolower(str[i]);
        }
    }

        puts(str);
    return 0;
}
