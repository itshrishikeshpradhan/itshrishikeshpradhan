#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j,flag,count=0;
    printf("enter range,two number\n");
    scanf("%d%d",&m,&n);
    if(m<0||n<0||m>n)
    {
        printf("invalid");
        exit(0);
    }
     printf("prime number between %d and %d are\n",m,n);
    for(i=m;i<n;i++)
    {
        flag=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
              flag=1;
              break;
            }

        }
        if(flag==0)
        {
            printf("%d\n",i);
            count++;
        }
    }
    printf("total number=%d",count);
    return 0;
}
