#include <stdio.h>
	#include<conio.h>
	#include<stdlib.h>
	struct btnode
	{
	int value;
	struct btnode *l;
	struct btnode *r;
	}
	*root=NULL,*temp=NULL,*t2,*t1;
	void delete2();
	void insert();
	void delete1();
	void create();
	void search(struct btnode *t);
	void search1(struct btnode *t,int data);
	int smallest(struct btnode *t);
	int largest(struct btnode *t);
	void inorder(struct btnode *t);
	void preorder(struct btnode *t);
	void postorder(struct btnode *t);
	int flag=1;
	void main()
	{
	int ch;
	printf("\nBINARY SEARCH TREE OPERATIONS\n1.INSERT\n2.DELETE\n3.INORDER\n4.PREORDER\n5.POSTORDER\n6.EXIT\n");
	while(1)
	{
	printf("\nenter your choice :");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	insert();
	break;
	case 2:
	delete1();
	break;
	case 3:
	inorder(root);
	break;
	case 4:
	preorder(root);
	break;
	case 5:
	postorder(root);
	break;
	case 6:
	exit(0);
	default:
	printf("\ninvalid choice!");
	break;
	}
	}
	}
	void insert()
	{
	create();
	if(root==NULL)
	root=temp;
	else
	search(root);
	}
	void create()
	{
	int data;
	printf("\nenter data to be inserted:");
	scanf("%d",&data);
	temp=(struct btnode*)malloc(1*sizeof(struct btnode));
	temp->value=data;
	temp->l=temp->r=NULL;
	}
	void search(struct btnode *t)
	{
	if((temp->value>t->value)&&(t->r!=NULL))
	search(t->r);
	else if((temp->value>t->value)&&(t->r==NULL))
	t->r=temp;
	else if((temp->value<t->value)&&(t->l!=NULL))
	search(t->l);
	else if((temp->value<t->value)&&(t->l==NULL))
	t->l=temp;
	}
	void inorder(struct btnode *t)
	{
	if(root==NULL)
	{
	printf("\nno elements to display!");
	return;
	}
	if(t->l!=NULL)
	inorder(t->l);
	printf("%d->",t->value);
	if(t->r!=NULL)
	inorder(t->r);
	}
	void delete1()
	{
	int data;
	if(root==NULL)
	{
	printf("\no elements!");
	return;
	}
	printf("\nenter the data to be deleted :");
	scanf("%d",&data);
	t1=root;
	t2=root;
	search1(root,data);
	}
	void preorder(struct btnode *t)
	{
	if(root==NULL)
	{
	printf("\nno elements to dislpay!");
	return;
	}
	printf("%d->",t->value);
	if(t->l!=NULL)
	preorder(t->l);
	if(t->r!=NULL)
	preorder(t->r);
	}
	void postorder(struct btnode *t)
	{
	if(root==NULL)
	{
	printf("\nnoelements to display!");
	return;
	}
	if(t->l!=NULL)
	postorder(t->l);
	if(t->r!=NULL)
	postorder(t->r);
	printf("%d->",t->value);
	}
