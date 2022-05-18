#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter the number");
	scanf("%d\n%d",&num1,&num2);
	if(num1==num2)
	{
		printf("both number are equal");
	}
	else
	{
		if(num1>num2)
		{
			printf("the greater number is %d",num1);
		}
		else
		{
			printf("the greater number is %d",num2);
		}
		return 0;
	}
}
