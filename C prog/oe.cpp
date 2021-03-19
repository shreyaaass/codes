#include<stdio.h>
int main()
{
	int a,b,n,n1=0;
	scanf("%d",&n);
	n1=n;
	while(n!=0)
	{
		a=n%10;
		n=n/10;
		b=b+(a*a*a);
	}
	if (b==n1)
	{
		printf("armstrong");
	}
	else
		printf("Not armstrong");
}
