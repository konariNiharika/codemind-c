#include<stdio.h>
int main()
{
    int n,rev=0,rem,num;
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n/=10;
    }
    if(num==rev)
    printf("True");
    else
    printf("False");
    return 0;
}