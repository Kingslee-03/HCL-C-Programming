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

void delete(struct node **head,int data)
{
	struct node *temp=*head;
	if((*head)->val==data)
	{
		*head=temp->next;
		free(temp);
		return;
	}
	while(temp->next->val!=data&& temp->next!=NULL)
	{
		temp=temp->next;
	}
	struct node *t=temp->next;
	temp->next=t->next; 	
}

int main()
{
    struct node *head=NULL;
    insert(&head,1);
    insert(&head,2);
    insert(&head,3);
	insert(&head,4);
    insert(&head,5);
    insert(&head,6);
    delete(&head,4);
    struct node *temp=head;
    while(temp!=NULL)
    {   
        printf("%d  ",temp->val);
        temp=temp->next;

    }
    
}





