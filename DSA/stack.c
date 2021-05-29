#include<stdio.h>
#include <stdbool.h>
#define MAX 50
int i;
int stack[MAX];
int top=-1;
 int isempty()
 {
 	if (top==-1)
 	{
 		return 0;
	 }
 	else
 	{
 		return 1;
	 }
 }
 int isfull()
 {
 	if (top==MAX-1)
 	return 0;
 	else
 	return 1;
 }
 int push(int data)
 {
 	if (isfull()==0)
 	{
 		printf("Stack overflow\n");
	 }
	else
	{	
		top++;
 		stack[top]=data;
 	}
}
int pop()
{
	if(isempty()==0)
	{
		printf("Error, stack is empty\n");
	}
	else
	{
		top--;
	}
}
int peek() 
{
   printf("%d\n",stack[top]);
}
void display()
{
	while(isempty()!=0) 
	{
      peek();
      pop();
   }
}
int main()
{
	int n,k;
//	PART A OF THE QUESTION(INSERTING AN ELEMENT)
	push(21);
	push(34);
	push(25);
	push(68);
	push(8);
//	PART B OF THE QUESTION(DELETING AN ELEMENT)
	pop();
	pop();
//	PART C OF THE QUESTION(CHECKING WHETHER THE STACK IS FULL)
	if (isfull()==0)
		printf("Stack is Full\n");
	else
	printf("Stack is not full\n");
//	PART D OF THE QUESTION(CHECKING WHETHER THE STACK IS EMPTY)
	if (isempty()==0)
		printf("Stack is empty\n");
	else
	printf("Stack is not empty\n");
	printf("Element at top of the stack:\n");
	peek();
	printf("elements of the stack are:\n");
	display();
	
}
