#include<stdio.h>
#define MAX 6
int arr[MAX];
int r,f;
//display elements of the queue
void disp()
{
	printf("elements of the queue are :\n");
	while(f<r)
	{
		printf("%d\n",arr[f]);
		f++;	
	}
}
//enqueue function
void enq(int a)
{
	r++;
	if(r>MAX-1)
	{
		printf("%d was not added, queue is full\n",a);
	}
	else
	{
	arr[r]=a;
	printf("%d was added to the queue\n",a);
}
}
//dequeue
void deq()
{
	printf("%d was removed from the queue\n",arr[f]);
	f++;
	if (f>r)
	{
		printf("underflow");	
	}

}
int main()
{
	r=-1;
	f=0;
	//PART A OF THE QUESTION(INSERT AN ELEMENT)
	enq(3);
	enq(61);
	enq(77);
	//PART B OF THE QUESTION(DELETE AN ELEMENT)
	deq();
	enq(222);
	enq(126);
	deq();
	enq(142);
	enq(2);
	//PART C OF THE QUESTION(DISPLAY THE ELEMENTS)
	disp(); 
}
