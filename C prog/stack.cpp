#include<stdio.h>
#include <stdbool.h>
#define MAX 5
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
int main()
{
	int n,k;
	//Part A of the question (inserting elements):
	push(21);
	push(34);
	push(45);
	//Part B of the question(delete an element):
	pop();
	printf("Part A of the question (inserting elements):\n");
	printf("Element at top of the stack:\n");
	peek();
	printf("elements of the stack are\n:");
	while(isempty()!=0) 
	{
      peek();
      pop();
   }
}
