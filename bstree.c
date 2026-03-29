#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};

void inorder(struct node *root)
{
	if(root==NULL)
		return;
	inorder(root->left);
	printf("%d ",root->data);
	inorder(root->right);
}
void preorder(struct node *root)
{
	if(root==NULL)
		return;
	printf("%d ",root->data);
	preorder(root->left);
	preorder(root->right);
}
void postorder(struct node *root)
{
	if(root==NULL)
		return;
	postorder(root->left);
	postorder(root->right);
	printf("%d ",root->data);
}


struct node* insert(int val)
{
	struct node *temp=malloc(sizeof(struct node));
	temp->data=val;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}

int main()
{
	struct node* root=insert(3);
	root->left=insert(6);
	root->right=insert(5);
	root->left->left=insert(1);
	root->left->right=insert(7);
	root->right->left=insert(4);
	printf("inorder  : ");
	inorder(root);
	printf("\n");
	printf("preorder : ");
	preorder(root);
	printf("\n");
	printf("postorder: ");
	postorder(root);
}
