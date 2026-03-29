#include<stdio.h>
#include<stdlib.h>
struct node
{
	int val;
	struct node *right;
	struct node * left;
};

struct node *newnode(int data)
{
	struct node *temp=malloc(sizeof(struct node));
	temp->val=data;
	temp->left=temp->right=NULL;
	return temp;	
}

struct node *insert(struct node *root,int data)
{
	if(root==NULL)
		return newnode(data);
	if(root->val<data)
	{
		root->right=insert(root->right,data);
	}
	else if(root->val>data)
	{
		root->left=insert(root->left,data);
	}
	return root;
}

struct node *deletenode(struct node *root,int data)
{
	if(root==NULL)
		return NULL;
	struct node *temp=root;
	while(temp->left!=NULL || temp->right!=NULL)
	{
	if(data>root->val)
		temp=temp->right;
	else if(data<root->val)
		temp=temp->left;
	
	else
	{
	
	if(temp->left==NULL)
	{
		struct node *t=temp->right;
		free(temp);
		return t;
	}
	else if(temp->right==NULL)
	{
		struct node *t=temp->left;
		free(temp);
		return t;
	}
	else
	{
		struct node *tp = min(temp->right);
        temp->val = tp->val;
        temp->right = deletenode(temp->right, tp->val);

	}
    }
}
	return temp;
}





void inorder(struct node *root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	printf("%d",root->val);
	inorder(root->right);
}

int main()
{
	struct node *root= NULL;
	root=insert(root,1);
	root=insert(root,2);
	root=insert(root,3);
	root=insert(root,4);
	root=insert(root,5);
	root=insert(root,6);
	inorder(root);
	printf("\n");
	root=deletenode(root,3);
	inorder(root);
	
}
