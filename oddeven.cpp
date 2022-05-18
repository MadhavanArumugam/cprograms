#include<stdio.h>
int main()
{
	int n;
	printf("enter thee number:");
	scanf("%d",&n);
	if(n%2==0)
    {
	   goto A;
     A:
    	printf("the given number is even");
	
    }
    else
    {
    	   goto B;
     B:
    	printf("the given number is odd");
    }
    
    
    	return 0;
}
