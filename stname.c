#include<stdio.h>
int main()
{
	char name[5][100];
	int r;
	for(r=0;r<5;r++)
	{
		scanf("%s",name[r]);
	}
	for(r=0;r<5;r++)
	{
		printf("\n%s",name[r]);
	}
	return 0;
}
