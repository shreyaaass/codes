#include<stdio.h>
int main()
{
	int n,i,c;
	scanf("%d",&n);
	c=0;
	for(i=1;i<n/2;i++)
	{
	if(n%i==0)
	{
	c=c+1;
	printf("%d  ",i);
	}
}
	if(c==1)
	{
	if((n+1)%6==0)
	printf("6*m+1");
	if((n-1)%6==0)
	printf("6*m-1");
	}	
	else
	printf("composite");

}
