#include<stdio.h>
#define MAX 6
int arr[MAX];
int r,f;
//display elements of the queue
void disp()
{
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
	//printf("f: %d\nr: %d\narr[r]: %d\narr[f]: %d\na: %d\n------------------\n",f,r,arr[r],arr[f],a);
}
}
//dequeue
void deq()
{
	f++;
	if (f>r)
	{
		printf("underflow");	
	}
	//printf("f: %d\nr: %d\narr[r]: %d\narr[f]: %d\na: %d\n------------------\n",f,r,arr[r],arr[f]);

}
int main()
{
	r=-1;
	f=0;
	enq(3);
	enq(61);
	enq(77);
	deq();
	enq(222);
	enq(126);
	deq();
	enq(142);
	enq(2);
	disp(); 
}
