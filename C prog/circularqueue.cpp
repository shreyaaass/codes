#include<stdio.h>
#define MAX 6
int arr[MAX];
int r,f;
//display elements of the queue
void disp()
{
	int rcopy,fcopy;
	rcopy=r;
	fcopy=f;
	while(fcopy<=rcopy)
	{
		printf("%d \n",arr[fcopy]);
		fcopy++;	
	}
printf("\n\n");
}
//enqueue function
void enq(int a)
{
	r++;
	if(r>MAX-1)
	{
		printf("%d was not added, queue overflow\n",a);
		//printf("%d  %d",f,r);
		r--;
	}
	else
	{
	arr[r]=a;
}
}
//dequeue
void deq()
{
	f++;
	if (f-1>r)
	{
		printf("underflow\n");	
	}
	if(f>MAX-1&&r>=MAX-1)
	{
			f=0;
			r=-1;
	}
}
int main()
{
f=0,r=-1;
//use function enq() or deq() according to question
enq(12);
enq(4);
enq(6);
deq();
disp();//to display all the elements 
}
