#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	scanf("%d",&n);
	int k,u,ar[n],h,sum,i,j,p[n],y[n];
	float av,m,avg[n],final[h];
	sum=u=0;
	h=(n-1)/2;
	for(i=0;i<n;i++)
		scanf("%d",&ar[i]);
	for(i=0;i<h;i++)
	{
		for(j=i+1;j<n-i-1;j++)
		{
			sum=sum+ar[j];
			av=float(sum)/float(n-2*i-2);
		}
		avg[i]=av;
		sum=0;
	}
for(i=0;i<h;i++)
{
	for(j=i;j<h;j++)
	{
		m=fabs(avg[i]-avg[j]);
		if (m!=0)
		{
		
		final[u]=m;
		y[u]=i;
		p[u]=j;
		//printf("%d  %d  %.02f %.02f %.02f\n",i,j,avg[i],avg[j],m);
		u++;	
	}
	}
}
float max=0;

for(i=0;i<u;i++)
if(final[i]>max)
{
max=final[i];
k=i;
}
printf("(S%d,S%d), %.02f",p[k]+1,y[k]+1,max);
}

