#include<stdio.h>
int main()
{
	int a=1,sum=0;
	for(;a<=10;)
	{
		printf("number=%d\n",a);
		sum=sum+a;
		printf("sum=%d\n",sum);
		a++;
	}
	printf("sum of first ten natural numbers is= %d",sum);
}
