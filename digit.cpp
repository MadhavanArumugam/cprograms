#include<stdio.h>
int main()
{
	int n,rem,sum=0;
	printf("enter the number:");
	scanf("%d",&n);
	while(n!=0)
	{
		rem=n%10;
		n=n/10;
		sum=rem+sum;
	}
	printf("the sum=%d",sum);
	return 0;
}
