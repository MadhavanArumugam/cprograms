#include<stdio.h>
int main()
{
	char ch;
	printf("enter any character:");
	scanf("%c",&ch);
	if((ch>='a' && ch>='z') || (ch>='A' && ch<='z')||(ch>='0' && ch<='9' ))
	printf("not a special character");
	//else if(ch>='0' && ch<='9')
	//printf("digit");
	else
	printf("special symbol");
	return 0;
}
