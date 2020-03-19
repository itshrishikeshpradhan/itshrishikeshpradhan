#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,*ptr,sum=0;
    printf("enter number of element:");
    scanf("%d",&n);
    int a[n];
    printf("\nenter the elements of an array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    ptr=a;
     for(i=0;i<n;i++)
     {
         sum=sum+*ptr;
         ptr++;
     }
     printf("sum=%d",sum);
    return 0;
}
