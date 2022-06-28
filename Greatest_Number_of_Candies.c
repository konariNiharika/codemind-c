#include<stdio.h>
int main()
{
    int n,i,arr[100],k,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(k+arr[i]>=max)
        {
            printf("True ");
        }
        else
        {
            printf("False ");
        }
    }
}