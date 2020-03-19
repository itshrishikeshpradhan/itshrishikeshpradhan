#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,n,i,j,flag,count=0;
    printf("enter two number\n");
    scanf("%d%d",&m,&n);
    if(m<0||n<0||m>n)
    {
        printf("invalid");
        exit(0);
    }
    for(i=m;i<=n;i++)
    {
        flag=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
                flag=0;
                break;
        }
        if(flag==1)
        {
            printf("%d\n",i);
            count++;
        }

    }
    printf("total=%d",count);
    return 0;
}
