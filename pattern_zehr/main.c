#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d",&n);
    int m=(2*n)-1;
    int arr[50][50];
    int j;
    for(i=0;i<m;i++)
    {

        for(j=i;j<m-i-1;j++)
        {
          arr[i][j]=m;

    }
    for(j=i+1;j<m-i-1;j++)
    {
       arr[j][m-i-1]=m;


    }
    for(j=m-2-i;j>=1-i;j--)
    {

        arr[m-i-1][j]=m;

    }
     for(j=m-2-i;j>i;j--)
     {

         arr[j][i]=m;
     }

     n--;
    }

      for(i=0;i<m;i++)
      {
          for(j=0;j<m;j++)
          {

              printf("%d",arr[i][j]);
          }
          printf("\n");
      }
    return 0;

}
