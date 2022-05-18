#include<stdio.h>
int swap(int,int);
int main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	swap(a,b);
	return 0;
}
int swap(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("after swapping:\n");
	printf("a=%d b=%d",x,y);
}
