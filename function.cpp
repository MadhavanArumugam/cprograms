#include<stdio.h>
int max(int,int);
int main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	max(a,b);
	return 0;
}
int max(int x,int y)
{
	(x>y)?printf("a is big"):printf("b is big");
	
}
