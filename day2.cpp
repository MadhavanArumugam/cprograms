#include<stdio.h>
int main()
{
	int num;
	printf("enter the number between 1 to 7:");
	scanf("%d",&num);
	switch(num)
	{
	case 1:
		printf("sunday");
		break;
	case 2:
		printf("monday");
		break;
	case 3:
		printf("tuesday");
		break;
	case 4:
		printf("wednesday");
		break;
	case 5:
		printf("thursday");
		break;
	case 6:
		printf("friday");
		break;
	case 7:
		printf("saturday");
		break;
     }
     return 0;
}