#include<stdio.h>
int main()
{
	int a1[3],b1[3],d,l,a,b,c;
	scanf("%d%d",&a,&b);
	int ac=a;
	int bc=b;
	l=100;
	for (int i=0;i<3;i++)
	{
		a1[i]=ac/l;
		b1[i]=bc/l;
		ac=ac-a1[i]*l;
		bc=bc-b1[i]*l;
		l=l/10;	
	}
	 int num[3],j;
	 for(j=0;j<3;j++)
	 {
	 num[j]=a1[j]+b1[j];
	 if (num[j]>10)
	 num[j]=num[j]-10;
	else if(num[j]==10||num[j]==0)
	num[j]=9;
	}
int sum=num[2]*100+num[1]*10+num[0];	 
printf("%d  %d  %d %d ",num[2],num[1],num[0],sum);
}
