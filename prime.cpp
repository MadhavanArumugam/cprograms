#include<stdio.h>
int main()
{
	int n,i=2,rem,flagA;
	printf("enter the number:");
	scanf("%d",&n);
	if(n==1)
	{
		printf("1 is a prime number");
	}
	else
	{
		for(;i<=n/2;i++)
	   {
		rem=n%i;
		if(rem==0)
		{
		   flagA=0;
		}
		else
		{
			flagA=1;
		}
	   }
	   if(flagA==0)
	   {
		printf("not a prime");
	   }
	   else
	   {
	     printf("prime number");
	   }
     }
	return 0;
	
}
