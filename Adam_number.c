
#include<stdio.h>
int main()
{
    int n,d,temp,rev=0,rev2=0,p,h;
    scanf("%d",&n);
    temp=n;
    h=n*n;
    while(n!=0)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    p=rev*rev;
    while(p!=0)
    {
        d=p%10;
        p=p/10;
        rev2=rev2*10+d;
    }
    if(rev2==h)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}
