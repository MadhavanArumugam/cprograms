#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("enter the number to find sum:");
	scanf("%d",&i);
	for(n=1;n<=i;n++)
	{
		sum=sum+n;
	}
	printf("the sum of numbers from 1 to %d is %d",i,sum);
	return 0;
	
	
}
