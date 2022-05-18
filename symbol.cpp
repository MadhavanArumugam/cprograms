#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,k;
	printf("enter the number of rows you want;");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
			for(k=1;k<=i;k++)
			{
			printf("#");
	          }
	printf("\n");
     }    
	getch();
	return 0;      
}
