#include<stdio.h>
	#include<conio.h>
	#include<stdlib.h>
	struct node
	{
	int data;
	struct node *next;
	};
	struct node *head=NULL;
	
	void create();
	void insert_beg();
	void insert_pos();
	void insert_end();
	void delete_beg();
	void delete_pos();
	void delete_end();
	void delete_all();
	void search();
	void display();
	void main()
	{
	int ch;
	do
	{
	printf("\n!!!OPERATIONS ON SINGLY LINKEDLISTS!!!\n");
	printf("\n1.Create\n2.Insert a node at the begining\n3.Insert a node at specified position\n4.Insert a node at the end\n5.Delete a node from the begining\n6.Delete a node from specified position\n7.Delete a node from the end\n8.Delete the entire linklist\n9.Search for an element\n10.Display the linklist\n11.Exit\n");
	printf("\nenter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	create();
	break;
	case 2:
	insert_beg();
	break;
	case 3:
	insert_pos();
	break;
	case 4:
	insert_end();
	break;
	case 5:
	delete_beg();
	break;
	case 6:
	delete_pos();
	break;
	case 7:
	delete_end();
	break;
	case 8:
	delete_all();
	break;
	case 9:
	search();
	break;
	case 10:
	display();
	break;
	case 11:
	exit(0);
	break;
	default:
	printf("\ninvalid choice!");
	break;
	}
	}
	while(ch!=11);
	}
	void create()
	{
	struct node *temp,*ptr;
	temp=(struct node *)malloc(sizeof(struct node));
	if(temp==NULL)
	{
	printf("\nmemory cannot be allocated\n");
	}
	printf("\nenter the value:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(head==NULL)
	{
	head=temp;
	}
	else
	{
	ptr=head;
	while(ptr->next!=NULL)
	{
	ptr=ptr->next;
	}
	ptr->next=temp;
	}
	}
	void insert_beg()
	{
	struct node *ptr;
	int item;
	ptr=(struct node*)malloc(sizeof(struct node*));
	if(ptr==NULL)
	{
	printf("\noverflow!");
	}
	else
	{
	printf("\nenter the value:");
	scanf("%d",&item);
	ptr->data=item;
	ptr->next=head;
	head=ptr;
	printf("\nnode is inserted!");
	}
	}
	void insert_pos()
	{
	int i,loc,item;
	struct node *ptr,*temp;
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
	printf("\noverflow!");
	}
	else
	{
	printf("\nenter the value:");
	scanf("%d",&item);
	ptr->data=item;
	printf("\nenter the location after which you want to insert:");
	scanf("%d",&loc);
	temp=head;
	for(i=0;i<loc;i++)
	{
	temp=temp->next;
	if(temp==NULL)
	{
	printf("\nnode can't be inserted!");
