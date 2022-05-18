#include<stdio.h>
int main()
{
	int i,j;
	int a[2][2]={1,2,3,4},b[2][2]={5,6,7,8},res[2][2];
	printf("\n\nmatrix a is:\n");
	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)
		{
	      printf("\t%d",a[i][j]);
	     }
     }
     printf("\n\nmatrix b is:\n");
	for(i=0;i<2;i++)
     {
     	printf("\n");
     	for(j=0;j<2;j++)
     	{
     		printf("\t%d",b[i][j]);
		}
	}
	printf("\n\nresultant matrix  is :\n");
	for(i=0;i<2;i++)
	{
		printf("\n");
		for(j=0;j<2;j++)
	     {
	       res[i][j]=a[i][j]+b[i][j];
		  printf("\t%d",res[i][j]);
		}
	}
	return 0;
}
