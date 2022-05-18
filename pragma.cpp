#include<stdio.h>
#pragma GCC poision a
int main()
{
	int a=10;
	if(a==5)
	printf("value of a is 5");
	else
	# error a value is not 5;
	return 0;
}
