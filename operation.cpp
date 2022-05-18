#include<stdio.h>
int main()
{ 
   int a,b,res;
   char op;
   printf("enter the numbers:");
   scanf("%d %d",&a,&b);
   printf("enter the operation+,-,*,/:");
   scanf("%c\n",&op);
   switch(op)
   {
   	case '+':
   		res=a+b;
   		printf("%d",res);
   		break;
    case '-':
    	     res=a-b;
   		printf("%d",res);
   		break;
     case '*':
     	res=a*b;
   		printf("%d",res);
   		break;
   	case '/':
   		res=a/b;
   		printf("%d",res);
   		break;
	case '%':
		res=a%b;
   		printf("%d",res);
   		break;
   }
	return 0;
}
