#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m,i,max;
    printf("enter the number of element in an array\n");
    scanf("%d",&m);
    int a[m];
    printf("enter the elements of an array\n");
    for(i=0;i<m;i++)
        scanf("%d",&a[i]);
        max=a[0];
        for(i=1;i<m;i++)
            if(a[i]>max)
                max=a[i];
                printf("minimum element of an array is %d",max);
                return 0;
}
