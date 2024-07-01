#include <stdio.h>
#include <stdlib.h>
#define size 100
int a[size],count=0;
void Bubblesort(int a[size],int n)
{
    int i,j,temp;
    for(i=0;i<=n-2;i++)
    {

        for(j=0;j<=n-2-i;j++)
        {

            count++;
            if(a[j]>a[j+1])
            {

                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

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
   Bubblesort(a,n);
   printf("sorted elements are\n");
   for(i=0;i<n;i++)
   {
       printf("%d\t",a[i]);
   }

}

