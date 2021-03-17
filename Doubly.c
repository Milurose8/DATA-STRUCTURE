        #include<stdio.h>
	#include<conio.h>
	#include<stdlib.h>
	struct node
	{
	struct node *prev;
	struct node *next;
	int data;
	};
	struct node *head;
	void insert_begin();
	void insert_last();
	void insert_spec();
	void delete_begin();
	void delete_last();
	void delete_spec();
	void show();
	void search();
	void main()
	{
	int ch;
	while(ch!=9)
	{
	printf("\n1.insert in beginning\n2.insert at last\n3.insert randomly\n4.delete from beginning\n5.delete from last\n6.delete node after given node\n7.search\n8.show\n9.exit\n");
	printf("enter your choice :");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
	insert_begin();
	break;
	case 2 :
	insert_last();
	break;
	case 3:
	insert_spec();
	break;
	case 4:
	delete_begin();
	break;
	case 5:
	delete_last();
	break;
	case 6:
	delete_spec();
	break;
	case 7:
	search();
	break;
	case 8:
	show();
	break;
	case 9:
	exit(0);
	break;
	default:
	printf("invalid choice!");
	}
	}
	}
	void insert_begin()
	{
	struct node *ptr;
	int item;
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
	printf("\noverflow!");
	}
	else
	{
	printf("\nenter value :");
	scanf("%d",&item);
	if(head==NULL)
	{
	ptr->next=NULL;
	ptr->prev=NULL;
	ptr->data=item;
	head=ptr;
	}
	else
	{
	ptr->data=item;
	ptr->prev=NULL;
	ptr->next=head;
	head->prev=ptr;
	head=ptr;
	}
	printf("\nnode inserted!");
	}
	}
	void insert_last()
	{
	struct node *ptr,*temp;
	int item;
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
	printf("\noverflow!");
	}
	else
	{
	printf("\nenter value :");
	scanf("%d",&item);
	ptr->data=item;
	if(head==NULL)
	{
	ptr->next=NULL;
	ptr->prev=NULL;
	head=ptr;
	}
	else
	{
	temp=head;
	while(temp->next!=NULL)
	{
	temp=temp->next;
	}
	temp->next=ptr;
	ptr->prev=temp;
	ptr->next=NULL;
	}
	}
	printf("\nnode inserted!");
	}
	void insert_spec()
	{
	struct node *ptr,*temp;
	int item,loc,i;
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
	printf("\noverflow!");
	}
	else
	{
	temp=head;
	printf("\nenter the location :");
	scanf("%d",&loc);
	for(i=0;i<loc;i++)
	{
	temp=temp->next;
	if(temp==NULL)
	{
	printf("\nthere are less than %d items.",loc);
	return;
	}
	printf("\nenter value :");
	scanf("%d",&item);
