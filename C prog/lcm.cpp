#include<stdio.h>
int main()
{
int i,calc,num1,num2,mul;
scanf("%d%d",&num1,&num2);
mul=num1*num2;
for(i=2;i<=mul;i++)
{
{
	if(num1%i==0&&num2%i==0)
	{
	num1=num1/i;
	num2=num2/i;
	calc=calc*i;
	i=2;
	}

}

}
	mul=num1*num2*calc;
	int c,m,n,diff,seri;
    seri=1;
    c=0;
    for(i=1;i>=1;)
    {
	c=c+1;
	seri=seri+mul;
    if(seri>31)
    i=0;
}
printf("%d",c);
}

