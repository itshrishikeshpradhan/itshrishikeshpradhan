#include <stdio.h>
#include <stdlib.h>
int fact(int);
int main()
{
    int n,r,res;
    printf("enter n,r\n");
    scanf("%d%d",&n,&r);
    if(n<r)
    {
        printf("invalid");
        exit(0);
    }
    res=fact(n)/(fact(n-r)*fact(r));
    printf("%dC%d=%d",n,r,res);
    return 0;
}
int fact(int n)
{
    if(n==0)
        return 1;
    else
        return (n*fact(n-1));
}
