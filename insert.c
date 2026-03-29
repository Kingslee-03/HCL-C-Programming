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

int main()
{
    struct node *head=malloc(sizeof(struct node));
    struct node *n1=malloc(sizeof(struct node));
    struct node *n2=malloc(sizeof(struct node));
    struct node *n3=malloc(sizeof(struct node));
    struct node *n4=malloc(sizeof(struct node));
    head->val=1;
    head->next=n1;
    n1->val=2;
    n1->next=n2;
    n2->val=3;
    n2->next=n3;
    n3->val=4;
    n3->next=n4;
    n4->val=5;
    n4->next=NULL;
    
    struct node *temp=head;
    while(temp!=NULL)
    {   
        printf("%d  ",temp->val);
        temp=temp->next;

    }
    printf("\n");
    insert(&head,6);
    temp=head;
    while(temp!=NULL)
    {   
        printf("%d  ",temp->val);
        temp=temp->next;

    }
}




