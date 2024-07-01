#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int T[20],P[10];
int count=0;
int bfsm(char T[20],char P[10])
{
    int m,n,i,j;
    n=strlen(T);
    m=strlen(P);
    for(i=0;i<=n-m;i++)
    {
        j=0;
        while( j<m && (P[j]==T[i+j]))
        {
            j=j+1;
            count++;
        }
        count++;
        if(j==m)
            return i;
    }
    return -1;
}
int main()
{
    int i,j,flag;
    char T[20],P[10];
    printf("enter the string\n");
    scanf("%s",T);
    printf("enter a string to compare\n");
    scanf("%s",P);
    flag = bfsm(T,P);
    if(flag==-1)
        printf("pattern not found");
    else
        printf("pattern found at position %d",flag+1);
    printf("\n number of compare %d\t",count-1);
    return 0;
}
