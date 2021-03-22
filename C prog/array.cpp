#include<stdio.h>
int main()
{
	int ar[50],b[50],i,n;
	printf("\nEnter the number of elements in the array:	");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("Input element %d :",i+1);
		scanf("%d",&ar[i]);
		b[n-i-1]=ar[i];
	}
	printf("The code in reverse order:\n");
	for ( i = 0; i < n; i++)
	{
		printf("%d\n",b[i]);
	}
	
}



