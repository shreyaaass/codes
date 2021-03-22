#include<stdio.h>
int main() 
{
    int ar[50],b[50],i,n,d;
	printf("\nEnter the number of elements in the array:	");
	scanf("%d",&n);
	printf("\n");
    printf("Input the by how many terms should the element be rotated :");
    scanf("%d",&d);
	for(i=0;i<n;i++)
	{
		printf("Input element %d :",i+1);
		scanf("%d",&ar[i]);
		b[n-i-1]=ar[i];
	}
    for(i=0;i<d;i++)
    {
        b[i]=ar[i+d];
        printf("%d\n",b[i]);
    }
}