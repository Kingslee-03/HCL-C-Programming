#include<stdio.h>
void add(int a,int b)
{
	printf("%d",a+b);
}
void sub(int a,int b)
{
	printf("%d",a-b);
}
void mul(int a,int b)
{
	printf("%d",a*b);
}
void div(int a,int b)
{
	if(!b)
	{
		printf("Zero division error");
		return ;
	}
	
	printf("%d",a/b);
}

int main()
{
	int a,b,n;
	char ch;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter the operation: ");
	scanf(" %c",&ch);
	void (*fp[4])(int,int)={add,sub,mul,div};
	if(ch == '+')
        fp[0](a,b);
    else if(ch == '-')
        fp[1](a,b);
    else if(ch == '*')
        fp[2](a,b);
    else if(ch == '/')
        fp[3](a,b);
    else
        printf("Invalid operation\n");
}
