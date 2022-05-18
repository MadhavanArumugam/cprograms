#include<stdio.h>
int main()
{
	int i,j,k;
	int array[2][2][2]=
	{
		{ {1,2},{3,4}},
		{ {5,6},{7,8} }
	};
	for(i=0;i<2;i++)   //array no
	{
		for(j=0;j<2;j++)  //rows
		{
			printf("\n");
			for(k=0;k<2;k++)  //columns
			{
				printf("\t%d",array[i][j][k]);
			}
		}
	}
	return 0;
}
