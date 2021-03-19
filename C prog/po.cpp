#include<stdio.h>
int main()
{
	int j,k,max,mid,m,i,n[3];
	for(i=0;i<3;i++)
	scanf("%d",&n[i]);
	mid=n[0];
	int min=n[0];
	max=0;
	for(j=0;j<3;j++)
	{
	if(max<n[j])
	max=n[j];
	if(min>n[j])
	min=n[j];
}
for(k=0;k<3;k++)
{
if (n[k]!=min&&n[k]!=max)
mid=n[k];
}
int num=max*100+min*10+mid;
printf("%d",num);
}
