#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,pos;
    printf("enter size of an array:");
    scanf("%d",&n);
    int a[n];

     printf("\nenter elements of an array:\n");
     for(i=0;i<n;i++)
    scanf("%d",&a[i]);
     printf("enter position of an element:");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++)
        a[i]=a[i+1];
    printf("element after deletion is\n");
     for(i=0;i<n-1;i++)
        printf("%d\t",a[i]);
    return 0;
}
