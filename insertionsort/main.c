#include <stdio.h>
#include <stdlib.h>
int count=0;
void Insertionsort(int a[10],int n)
{

    int i,j,item;
    for(i=1;i<=n-1;i++)
    {

        item=a[i];
        j=i-1;
        while(j>=0&&a[j]>item)
        {

            count++;
            a[j+1]=a[j];
            j=j-1;}
            count++;
            a[j+1]=item;
        }
    }


int main()
{
   int a[10],n,i,j;
   printf("\n Read the number of elements:");
   scanf("%d",&n);
   printf("\n Read the elements\n");
   for(i=0;i<n;i++)
    scanf("%d",&a[i]);
   Insertionsort (a,n);
   printf("\n Elements after sorting\n");
   for(i=0;i<n;i++)
    printf("%d\n",a[i]);
   printf("\n Number of times the basic operation gets executed is %d\n",count);
   return 0;
}
