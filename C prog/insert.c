#include<stdio.h>
int main()
{
    int i,n,d,k;
	printf("\nEnter the number of elements in the array:	");
    scanf("%d",&n);
	int ar[n],b[n+1];
    printf("\nEnter the index where you want to insert[0-%d):	",n);
    scanf("%d",&d);
    printf("\nEnter the number you want to add:	");
    scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		printf("Input element %d :",i+1);
		scanf("%d",&ar[i]);
        b[i]=ar[i];
    }
    b[d]=k;
    for(i=d+1;i<n+1;i++)
    {
        b[i]=ar[i-1];
    }
    for(i=0;i<n+1;i++)
		printf("%d\n",b[i]);
}