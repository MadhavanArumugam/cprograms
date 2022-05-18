#include<stdio.h>
int main()
{
     char a;
	printf("enter the character=");
	scanf("%c",&a);
	if(a>='0' && a<='9' )
	{
	   printf("it is a digit");
	}
	else if(a>='a' && a<='z')
	{
		printf("it is lower case");
	}
	else if(a>='A' && a<='Z')
	{
		printf("it is a upper case");
	}
	else 
	{
		printf("it is a special symbol");
	}
	return 0;
	
}
