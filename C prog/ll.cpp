#include<stdio.h>
int main()
{
int i,calc,num1,num2,mul;
scanf("%d%d",&num1,&num2);
mul=num1*num2;
mul1=mul;
for(i=2;i<=mul;i++)
{
{
	if(num1%i==0&&num2%i==0)
	{
	mul1=mul1/i;
	i=2;
	}

}

}
	mul=num1*num2;
	printf(mul);
}
