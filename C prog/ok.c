#include<stdio.h>
int main()
{
	int n,i,d;
	scanf("%d%d",&n,&d);
	int ar[n],b[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
		b[i]=ar[i];
	}
	for(i=0;i<n;i++)
	{
		ar[i]=ar[n-d+i];
	}
	for(i=0;i<n-d;i++)
	{
		ar[i+d-1]=;
	}
}

