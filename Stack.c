#include<stdio.h>
int n=10;
int stack[n];
int top=-1;

void pop()
{
	if(top==-1)
	{
		printf("stack is emty");
		return;
	}
	top--;
}
void push(int val)
{
	if(top>n)
	{
		printf("stack overflow");
		return; 
	}
	stack[++top]=val;
	
}
void display()
{
	if(top==-1)
	{
		printf("stack is emty");
		return;
	}
	for(int i=top;i>=0;i--)
	{
		printf("%d ",stack[i]);
	}
	printf("\n");
}

int main()
{
	push(4);
	push(5);
	display();
	push(2);
	display();
	pop();
	pop();
	display();
}
