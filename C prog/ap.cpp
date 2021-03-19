#include<stdio.h>
int main()
{
	int i,d1,d2,s1,s2;
	s1=s2=0;
	scanf("%d%d",&d1,&d2);
	for(i=1;i<=20;i++)
	{
	s1=s1+d1;
	printf("%d ",s1);
	
}
printf("\n");
for(i=1;i<=20;i++)
	{
s2=s2+d2;
printf("%d ",s2);
}
}