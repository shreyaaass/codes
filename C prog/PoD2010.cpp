#include<stdio.h>
int main()
{
	int c,j,k,f,max,mid,m,i,n[3];
	for(i=0;i<3;i++)
	scanf("%d",&n[i]);
	int min=n[0];
	max=0;
	for(j=0;j<3;j++)
	{
	if(max<n[j])
	{
	max=n[j];
	c=j;
	}
	if(min>n[j])
	{
	min=n[j];
	f=j;
	}
}
for(i=0;i<3;i++)
{
	if(i!=j&&i!=c)
	for(k=0;k<3;k++)
	{
		if(n[k]==n[i])
		mid=n[k];
	}
}
for(k=0;k<3;k++)
{
if (n[k]!=min&&n[k]!=max)
mid=n[k];
}
printf("%d  %d  %d ",min,max,mid);
int num=max*100+min*10+mid;
printf("%d",num);
}
