#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,j;
	float sum=0;
	scanf("%d",&n);
	int ar[n],y[n];
	float avg[(n-1)/2];
	for(i=0;i<n;i++)
	{
		scanf("%d",ar[i]);
	}
	for(i=1;i<(n-1)/2;i++)
	{
		for(j=i;j<n-i;j++)
	{
		printf("k");
		sum=sum+float(ar[j]);
	}
		printf("k");
		avg[i]=sum/float(n-i);
		printf(" .01f% ",avg[i]);
	}
}
	
