#include <stdio.h>
#include <stdlib.h>
void readarray(int a[],int n);
void displayarray(int a[],int n);
void selectionSort(int a[],int n);
int main()
{
    int n;
    printf("enter the size of an array:");
    scanf("%d",&n);
    int a[n];
    readarray(a,n);
    printf("unsorted array is:\n");
    displayarray(a,n);
    selectionSort(a,n);
     printf("\nsorted array is:\n");
     displayarray(a,n);


    return 0;
}
void readarray(int a[],int n)
{
    int i;
     printf("\nenter the elements of an array\n");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void selectionSort(int a[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n;i++)
    {
        min=i;
         for(j=i+1;j<n;j++)
         {
             if(a[min]>a[j])
                min=j;
         }
         temp=a[i];
           a[i]=a[min];
           a[min]= temp;
             }
}
void displayarray(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t",a[i]);
}
