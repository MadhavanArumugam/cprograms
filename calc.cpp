#include<stdio.h>
int main()
{
	int a,b,add,sub,mul,div,mod,ch;
	printf("enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("enter the choice(1.add,2.sub,3.mul,4.div,5.mod):");
	scanf("\n%c",&ch);
	switch(ch)
     {
     	case '+':
     		add=a+b;
     		printf("%d",add);
     		break;
          case '-':
          	sub=a-b;
          	printf("%d",sub);
          	break;
          case '*':
          	mul=a*b;
          	printf("%d",mul);
          	break;
		case '/':
          	div=a/b;
          	printf("%d",div);
          	break;
		case '%':
          	mod=a%b;
          	printf("%d",mod);
          	break;
	     default:
		     printf("enter correct choice");
			break;			   
	}
	//printf("%d",res);
	return 0;
}
