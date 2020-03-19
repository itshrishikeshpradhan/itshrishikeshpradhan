#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,rem,gcd,lcm,temp1,temp2;
    printf("enter two number\n");
    scanf("%d%d",&m,&n);
    temp1=m;
    temp2=n;
    while(n!=0)
    {
      rem=m%n;
      m=n;
      n=rem;
    }
    gcd=m;
    lcm=(temp1*temp2)/gcd;
    printf("gcd=%d\n\nlcm=%d",gcd,lcm);

    return 0;
}
