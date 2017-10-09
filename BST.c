#include<stdio.h>
#include<stdlib.h>
typedef struct BST
{
	int data;
	struct BST *left,*right;
}node;

void traverse_inorder(node *r)
{
	if(r!=NULL)
	{
	traverse_inorder(r->left);
	printf("%d\t",r->data);
	traverse_inorder(r->right);
}
}
int main()
{
	node *root=NULL;
	int c,a;
do
{
		printf("\nENTER YOUR CHOICE\n");
		printf("\n1-INSERTION\n2-DELETION\n3-Exit\n\n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:("Enter the element to be inserted\n");
			       scanf("%d",&a);
			       insert(&root,a);
			       break;
			case 2:("Enter the element to be delete\n");
			      scanf("%d",&a);
			      delete(&root,a);
			      break;
			case 3: 
			      break;             
				
			case 4:
				exit(0);
			default:
				printf("\nInvalid Input.");
				break;		
			}
		}while(1);	
return 0;
}
void insert(node **r,int num)
{
	node *temp,*ptr;
	temp=*r;
	if(temp==NULL)
	{
	ptr=(node*)malloc(sizeof(node));
	ptr->data=num;
	ptr->left=NULL;
	ptr->right=NULL;
	*r=ptr;
}
	else
	{
		if(num>temp->data)
		{
			if(temp->right==NULL)
			{
				insert(&temp->right,num);
			}
			else
			{
				insert(&temp->left,num);
			}
		}
	}
	}
	
		int search_BST(node *r,int num)
		{
			if(r==NULL)
				return 0;
			else
			{
				if(num==r->data)
				return 1;
				else
				{
					if(num>r->data)
					search_BST(r->right,num);
					else
					search_BST(r->left,num);
           }
	   }
   }
   void search_node(node **x,node *root,node **parent,node,int num,int *f)
   {
	   node *temp;
	   temp=root;
	   if(temp==NULL)
	       return;
	       while(temp!=NULL)
	       {
	   if(num==temp->data)
	   {
		   *f=1;
		   *x=temp;
		   return;
	   }
	   *parent=temp;
	   if(num>temp->data)
	   temp=temp->reght;
	   else
	   temp=temp->left;
   }
}
void delele(int num,node **r)
{
	node *temp,*parent,*x,*xsucc;
	int f=0;
	parent=NULL;xsucc=NULL,x=NULL;
	temp=*r;
search_node(&x,temp,&parent,&f);
	if(f==0)
	{
	printf("\nThe Element %d Not Found",num);
	return;
}
if(x->left==NULL && x->right==NULL)   //X has no child
{
	if(x->data>parent->data)
	parent->right=NULL;
	else
	parent->left=NULL;
	
}
else if(x->left!=NULL && x->right==NULL)   //X has left child
{
	if(x->data>parent->data)
	parent->right=x->left;
	else
	parent->left=x->left;

}
else if(x->right!=NULL && x->left==NULL)  //X has right child
{
	if(x->data>parent->data)
	parent->right=x->right;
	else
	parent->left=x->right;
	
}
}
else if(x->left!=NULL && x->right!=NULL)  // X has right and left both child
{
	parent=x;
	xsucc=x->right;
	while(xsucc->left!=NULL)
	{
		parent=xsucc;
		xsucc=xsucc->left;
	}
	if(xsucc->data>parent->data)
	   parent->right=NULL;
	else
	   parent->left=NULL;
	x->data=xsucc->data;
	x=xsucc;

}
free(x);
}
