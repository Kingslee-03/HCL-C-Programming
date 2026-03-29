#include<stdio.h>
#include<stdlib.h>
struct node 
{
	char val;
	struct  node *next;
};

void push(struct node **top,char ch)
{
	struct node *temp=malloc(sizeof(struct node));
	temp->val=ch;
	temp->next=*top;
	*top=temp;	
}

char pop(struct node **top)
{
	struct node *temp=*top;
	char ch = temp->val;
	*top=temp->next;
	free(temp);
	return ch;
}

int main()
{
	char str[]="{()}";
	struct node *stack=NULL;
	for(int i=0;str[i]!='\0';i++)
	{
		char ch =str[i];
		if(ch=='('|| ch=='{' || ch=='[')
		{
			push(&stack,ch);
		}
		else
		{
			if(stack==NULL)
			{
				printf("Not balanced");
				return 0;
			}
			char top=pop(&stack);
			if((ch==')'&&top!='(') || (ch=='}'&&top!='{')  || (ch==']'&&top!='['))
				{
					printf("Not Balanced");
					return 0;
				}
		}
		
	}
	if(stack==NULL)
			printf("Balanced");
		else 
			printf("Not Balanced");
	
	
}
