#include<stdio.h>
#include<stdlib.h>
struct node{
    int val;
    struct node *next;
};

void insert(struct node **head,int data)
{
    struct node *temp = malloc(sizeof(struct node));
    temp->val = data;
    temp->next = NULL;
    if(*head == NULL)
    {
        *head = temp;
        return;
    }
    struct node *t = *head;

    while(t->next != NULL)
    {
        t = t->next;
    }
    t->next = temp;
}

void split(struct node **second,struct node *head)
{
	struct node *temp=head;
	int i=0;
	while(temp->next!=NULL)
	{
		temp=temp->next;
		i++;
	}
	int n=i/2;
	temp=head;
	for(int j=0;j<n;j++)
	{
		temp=temp->next;
	}
	*second=temp->next;
	temp->next=NULL;

}

int main()
{
    struct node *head=NULL;
    insert(&head,1);
    insert(&head,2);
    insert(&head,3);
	insert(&head,4);
    insert(&head,5);
    
    struct node *temp=head;
    while(temp!=NULL)
    {   
        printf("%d  ",temp->val);
        temp=temp->next;

    }
    printf("\n");
    struct node *first=NULL,*second=NULL;
    split(&second,head);
    temp=head;
    while(temp!=NULL)
    {   
        printf("%d  ",temp->val);
        temp=temp->next;

    }
    printf("\n");
    temp=second;
    while(temp!=NULL)
    {   
        printf("%d  ",temp->val);
        temp=temp->next;

    }
    
}




