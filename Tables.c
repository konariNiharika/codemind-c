#include<stdio.h>
int main()
{
	int num1,num2,i,m;
	scanf("%d%d",&num1,&num2);
	for(i=1;i<=num2;i++)
	{
	if(i%2!=0)
	{
		m=num1*i;
		printf("%d x %d = %d
",num1,i,m);
	}
	}
}