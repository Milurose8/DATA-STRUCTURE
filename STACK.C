#include<stdio.h>
#include<conio.h>
int stack[100],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
int main()
{
clrscr();
top=-1;
printf("Enter the size of stack[max-100]:");
scanf("%d",&n);
printf("\n\t STACK OPERATIONS USING ARRAY");
printf("\n\t 1.push \n\t 2.pop \n\t 3.display \n\t 4.exit");
do
{
printf("\n Enter the choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("\n\t exit point");
break;
}
default:
{
printf("\n\t Enter a valid choice");
}
}
}
while(choice!=4);
return 0;
}
void push()
{
if(top>=n-1)
{
printf("\n\tSTACK is overflow");
}
else
{
printf("\n\tEnter a value to be pushed:");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top<=-1)
{
printf("\n\t stack is under flow");
}
else
{
 printf("\n\t the popped elements is %d",stack[top]);
 top--;
 }
 }
 void display()
 {
 if(top>=0)
 {
 printf("\n the element in stack\n");
 for(i=top;i>=0;i--)
 printf("\n%d",stack[i]);
 printf("\n press next choice");
 }
 else
 {
 printf("\n the stack is empty\n");
 }
 }