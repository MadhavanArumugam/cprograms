#include<stdio.h>
#include"myhead.h"
int main()
{
	int n1,n2;
	scanf("%d%d",&n1,&n2);
	int addition=add(n1,n2);
	printf("%d",addition);
	return 0;
}
