#include<stdio.h>
int main()
{
	int side1,side2,side3;
	printf("enter the sides of triangle");
	scanf("%d %d %d",&side1,&side2,&side3);
	if(side1==side2 && side2==side3)
	{
		printf("the given triangle is a equilateral triangle");
	}
	else if(side1==side2 && side2!=side3)
	{
		printf("the given triangle is isoceles triangle ");
	}
	else 
	{
		printf("the given triangle is sccalene triangle");
	}
	return 0;
}
