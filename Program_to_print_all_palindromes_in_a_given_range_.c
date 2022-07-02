#include<stdio.h>
int main()
{
    int num,rem,rev,temp,start,end;
    scanf("%d",&start);
    scanf("%d",&end);
    for(num=start;num<=end;num++)
    {
        temp=num;
        rev=0;
        while(temp)
        {
            rem=temp%10;
            temp=temp/10;
            rev=rev*10+rem;
        }
        if(num==rev)
         printf("%d ",num);
    }
    return 0;
    
}