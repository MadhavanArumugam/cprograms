#include<stdio.h>
int main()
{
	int a=5,b=6,temp;
	temp=a;
	a=b;
	b=temp;
	printf("%d %d %d",temp,a,b);
	return 0;
}
