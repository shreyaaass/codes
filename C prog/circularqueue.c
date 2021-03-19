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
		printf("%d\n",arr[fcopy]);
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
		r--;
	}
	else
	{
	arr[r]=a;
	//printf("enqueue:-\nf: %d\nr: %d\narr[r]: %d\narr[f]: %d\na: %d\n------------------\n",f,r,arr[r],arr[f],a);
}
}
//dequeue
void deq()
{
	f++;
	//printf("(%d)(%d)",f,r);
	if (f-1>r)
	{
		printf("underflow\n");	
	}
	//printf("dequeue:-\nf: %d\nr: %d\narr[r]: %d\narr[f]: %d\n------------------\n",f,r,arr[r],arr[f]);
	if(f>MAX-1&&r>=MAX-1)
	{
			f=0;
			r=-1;
	}
}
int main()
{
	r=-1;
	f=0;
	enq(3);
	enq(61);
	enq(77);
	deq();
	deq();
	enq(222);
	enq(126);
	deq();
	enq(142);
	enq(2);
	disp();
	deq();
	deq();
	deq();
	enq(45);
	enq(31);
	enq(15);
	enq(78);
	enq(8);
	enq(900);
	enq(88);
	//printf("%d  %d\n",f,r);
	disp(); 
}
