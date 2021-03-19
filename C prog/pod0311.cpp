#include<stdio.h>
int main()
{
    int i,m1,n,m,j,k,c;
    c=0;
    k=2;
    scanf("%d",&n);
    for(i=3;i<n;i=i+2)
    {
    	m=n-2*i-k;
		if((m)%2!=0)
    	{
		for(j=i;j<n;j=j+2)
		{
		m1=n-(i+j);
		if(m1%2!=0&&i<j&&j<m1&&i>0&&j>0&&m1>0)
		{
		
		printf("%d %d %d\n",i,j,m1);
		c=c+1;
		}
		}
		}
		if((m-i-2)==2)
		{
			break;
		}
		else if(m%2==0)
		k=k+2;
	}
	if(c==0)
	printf("No way");
}
