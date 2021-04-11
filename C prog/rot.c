#include<stdio.h>
int main() 
{
    int i,n,d;
	printf("\nEnter the number of elements in the array:	");
	scanf("%d",&n);
	printf("\n");
    printf("Input the by how many terms should the element be rotated :");
    scanf("%d",&d);
	int ar[n],b[d],c[n-d];
    for(i=0;i<n;i++)
	{
		printf("Input element %d :",i+1);
		scanf("%d",&ar[i]);
		}
    for(i=0;i<d;i++)
    {
        b[i]=ar[i];
    }
    for(i=d;i<n;i++)
    {
        c[i-d]=ar[i];
    }
    for(i=0;i<d;i++)
    {
        c[n-d+i]=b[i];
    }
    for(i=0;i<n;i++)
    printf("%d\n",c[i]);
}