#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define pi 3.14
int main()
{
    int n,deg,i;
    float x,num,den=1,sum=0;
    printf("enter the number of terms\n");
    scanf("%d",&n);
     printf("enter angle\n");
    scanf("%d",&deg);
    x=deg*pi/180;
    num=x;
    for(i=1;i<=n;i++)
    {
        sum=sum+num/den;
        num=-num*x*x;
        den=den*(i*2)*(i*2+1);
    }
    printf("sin(%d)=%f\n",deg,sum);
     printf("sin(%d)=%f\n",deg,sin(x));

    return 0;
}
