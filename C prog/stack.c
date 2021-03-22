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
	printf("Enter the number of elemants in stack:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&k);
		push(k);
	}
	printf("%d:\n",top);
	printf("Element at top of the stack:\n");
	peek();
	printf("elements of the stack are:\n");
	display();
	
}
