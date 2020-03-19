#include <stdio.h>
#include <stdlib.h>
int m,n;
  int sumrow(int a[m][n],int i)
    {
    int j,sum=0;
    for(j=0;j<n;j++)
        sum=sum+a[i][j];
    return sum;
}
int sumcol(int a[m][n],int j)
{
    int i,sum=0;
     for(i=0;i<m;i++)
        sum=sum+a[i][j];
    return sum;
}

int main()
{
    int i,j;
    printf("enter order\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("enter the elements\n");
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",&a[i][j]);
    printf("*****sum of row*****\n");
    for(i=0;i<m;i++)
    printf("sum of row %d=%d\n",i+1,sumrow(a,i));
     printf("*****sum of column*****\n");
   for(j=0;j<n;j++)
    printf("sum of row %d=%d\n",j+1,sumrow(a,j));
    return 0;
}

