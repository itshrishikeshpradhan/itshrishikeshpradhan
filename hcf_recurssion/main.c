#include <stdio.h>
#include <stdlib.h>
int hcf(int n1,int n2);
int main()
{
    int n1,n2;
    printf("enter n1,n2\n");
    scanf("%d%d",&n1,&n2);
    printf("hcf=%d",hcf(n1,n2));
    return 0;
}
int hcf(int n1,int n2)
{
    if(n2!=0)
        return hcf(n2,n1%n2);
    else
        return n1;
}
