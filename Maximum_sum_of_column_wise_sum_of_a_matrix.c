#include<stdio.h>
int main()
{
    int n,m,i,j,sum=0,max,a[100][100];
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<m;j++)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            sum+=a[i][j];
        }
        if(max<sum)
        {
            max=sum;
        }
    }
    printf("%d",max);
}