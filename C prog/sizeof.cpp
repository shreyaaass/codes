#include<stdio.h>
struct employee 
{
	int eID;
	char egen;
	char ename[10];
	float esal;
};
int main()
{
struct employee *e;
e=(struct employee *)malloc(sizeof(struct employee));	
scanf("%d",&e->eID);
scanf("%s",&e->ename);
scanf("%f",&e->esal);
printf("%d",e->eID);
printf("%s",e->ename);
printf("%f",e->esal);
}
