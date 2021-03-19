#include<stdio.h>
int repnum(int n,int arr[])
{
	int i,j,c,ar[n][2];
	for(i=0;i<n;i++)
	{	
		c=0;
		for(j=i;j<n;j++)
		{
		ar[i][0]=arr[i];
		printf("%d %d\n",ar[i][0],arr[i]);
		if(arr[i]==arr[j])
			{
			c++;
			arr[j]=-24;
		}
		}
	ar[i][1]=c;
	printf("%d-->%d\n",ar[i],c);
}
}
int main()
{	
	int a[]={4,5,7,9,12,4,5,6,6,21,14,6};
	repnum(12,a);
}
