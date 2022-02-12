#include<stdio.h>
int main()
{
    int num,rem,sum=0,digit;
    scanf("%d",&rem);
    num=rem;
    while(num!=0)
    {
        digit=num%10;
        sum+=digit;
        num=num/10;
    }
    if(rem%sum==0)
    printf("True");
    else
    printf("False");
    return 0; 
}