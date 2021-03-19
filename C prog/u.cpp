#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,sum;
    scanf("%d%d",&c,&sum);
    e=sum/4;
    d=e-c;
	b=d-c;
    a=c-b;
    f=e+d;
    printf("%d %d %d %d %d %d",a,b,c,d,e,f);
}
