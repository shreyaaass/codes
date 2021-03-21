#include<stdio.h>
struct node{
	int val;
	struct node *ptr;
}*head;
void add(int value)
{
 struct node *tail,*temp;
 //scanf("%d",&value);
 temp->val=value;
 temp->ptr=NULL; 
	if(head==NULL)
	{
		head=temp;
		tail=temp;
	}
	else
	{
		tail->ptr=temp;
		tail=temp;
	}
}
void display()
{
	struct node *ptr1;
	ptr1=head;
	while(ptr1!=NULL)
	{
		printf("%d",ptr1->val);
		ptr1=ptr1->ptr;
	}

}
int main()
{
	add(3);
	add(6);
	add(54);
	display();
}