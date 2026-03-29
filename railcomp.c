#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int val;
	int seat;
	struct node *prev;
	struct node *next;
};

void insertatend(struct node **head,int data,int s)
{
	struct node *temp=malloc(sizeof(struct node ));
	temp->val=data;
	temp->seat=s;
	temp->next=temp->prev=NULL;
	if(*head==NULL)
		{
			*head=temp;
			return;
		}
	struct node *t=*head;
	while(t->next!=NULL)
	{
		t=t->next;
	}
	t->next=temp;
	temp->prev=t;
		
}
void insertatbegin(struct node **head,int data,int s)
{
	struct node *temp=malloc(sizeof(struct node ));
	temp->val=data;
	temp->seat=s;
	temp->next=temp->prev=NULL;
	if(*head==NULL)
		{
			*head=temp;
			return;
		}
	struct node *t=*head;
	temp->next=*head;
	(*head)->prev=temp;
	*head=temp;		
}

void displayfor(struct node *head)
{
	if(head==NULL)
		return;
	while(head!=NULL)
	{
		printf("C:%d - %d seats ",head->val,head->seat);
		head=head->next;
	}
	printf("\n");
}

void displayback(struct node *head)
{
	if(head==NULL)
		return;
	while(head->next!=NULL)
		head=head->next;
	while(head!=NULL)
	{
		printf("C:%d - %d seats ",head->val,head->seat);
		head=head->prev;
	}
	printf("\n");
}
void removecomp(struct node **head,int data)
{
	struct node *temp=*head;
	if(*head==NULL)
	{
		printf("Compartment not found");
		printf("\n");
		return;
	}
	while(temp != NULL && temp->val != data)
	{
		temp=temp->next;
	}
	
	if(temp==NULL)
	{
		printf("Compartment not found");
		printf("\n");
		return;
	}
	if(temp==*head)
	{
		*head=temp->next;
		if(*head!=NULL)
			(*head)->prev=NULL;
		free(temp);
		return;
	}
	
	
	if(temp->next==NULL  )
	{
		temp->prev->next=NULL;
		free(temp);
		return;
	}
	if(temp->next!=NULL)
	{
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		free(temp);
		return;
	}
	
}

int main()
{
	struct node *head=NULL;
	int n;
	printf("Enter the no. of compartments: ");
	scanf("%d",&n);
	
	for(int i=0;i<n;i++)
	{	int a,b,s;
		printf("Enter the compartment %d : ",i+1);
		scanf("%d",&a);
		printf("Enter no. of seats: ");
		scanf("%d",&s);
		printf("For add  at begin enter 0 otherwise enter 1: ");
		scanf("%d",&b);
		printf("\n");
		if(b)
			insertatend(&head,a,s);
		else 
			insertatbegin(&head,a,s);
		
	}
	
	displayfor(head);
	displayback(head);
	int k;
	printf("Enter the compartment to remove: ");
	scanf("%d",&k);
	removecomp(&head,k);
	displayfor(head);
	
}
