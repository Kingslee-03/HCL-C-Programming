#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int val;
	int c;
	int r;
	struct node *next;
};
void insert(struct node **head,int col,int row,int value)
{
	struct node *temp=malloc(sizeof(struct node));
	temp->val=value;
	temp->r=row;
	temp->c=col;
	temp->next=NULL;
	struct node* t=*head;
	if(*head==NULL)
	{
		*head=temp;
		return;
	}
	while(t->next!=NULL)
	{
		t=t->next;
	}
	t->next=temp;
}

void dis(struct node *head)
{
	while(head!=NULL)
	
	{
		printf("%d,%d: %d",head->c+1,head->r+1,head->val);
		printf("\n");
		head=head->next;
	}
}

int main()
{
	int mat[3][3]={	{0,1,0},
					{5,0,0},
					{0,0,0},
		          };
	struct node *head=NULL;
				
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(mat[i][j]!=0)
			insert(&head,i,j,mat[i][j]);
		}
	}
	dis(head);
}
