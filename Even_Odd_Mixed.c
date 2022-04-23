#include<stdio.h>
int main()
{
    int n,d,o=0,e=0,c=0;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        if(d%2)
        {
            o++;
        }
        else
        {
            e++;
        }
        c++;
    }
    if(o==c)
    {
        printf("Odd");
    }
    else if(e==c)
    {
        printf("Even");
    }
    else
    {
        printf("Mixed");
    }
}