#include <stdio.h>
#include <stdlib.h>
#define size 100
int a[size],count=0;
void Selectionsort(int a[size],int n)
{
    int i,j,temp,min=0;
    for(i=0;i<=n-2;i++)
    {
        min=i;
        for(j=i;j<=n-1;j++)
        {
            count++;
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("the count is %d\n",count);

}

int main()
{
   int i,n;
   printf("enter the number of elements to be stored\n");
   scanf("%d",&n);
   printf("enter array elements\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   Selectionsort(a,n);
   printf("sorted elements are\n");
   for(i=0;i<n;i++)
   {
       printf("%d\t",a[i]);
   }
    return 0;
}
