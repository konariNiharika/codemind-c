#include<stdio.h>
int main()
{
    int n,i,arr[100],bp,np,j,k,h,p,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
    for(j=arr[i];j>=1;j--)
    {
        c=0;
        for(k=1;k<=j;k++)
        {
            if(j%k==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            bp=j;
            p=arr[i]-bp;
            break;
        }
    }
    for(j=arr[i];j<=arr[i]+100;j++)
    {
        c=0;
        for(k=1;k<=j;k++)
        {
            if(j%k==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            np=j;
            h=j-arr[i];
            break;
        }
    }
    if(p<=h)
    {
        printf("%d
",bp);
    }
    else
    {
        printf("%d
",np);
    }
    }
}