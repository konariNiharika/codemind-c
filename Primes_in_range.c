#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,s,c;
	int l,r;
	scanf("%d",&l);
	scanf("%d",&r);
	c = 0; 
    for(n = l;n<=r;++n)
	{
	  if(n==1)
		continue;
		s=0;
	   for(i = 2;i<=sqrt(n);++i)
	   {
		 if(n%i==0)
		 {
			s=1;
			break;
		  }
		}
		if(s==0)
			++c;
	 }
	printf("%d",c);
}