#include<stdio.h>
int main()
{
	int n,rem,rev=0;
	printf("emter the number:");
	scanf("%d",&n);
	do
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}while(n!=0);
	printf("reverse number is:%d",rev);
	return 0;
}
