#include<stdio.h>
int main()
{
	int a=5;
	if(a==5)
	{
	printf("a value is 5");
     }
	else
	{
	#error a value is not 5;
     }
	return 0;
}
