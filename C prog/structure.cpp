#include<stdio.h>
struct emp
{
	int Id;
	char name[20];
	char des[20];
	int age;
	float sal;
	char gen;
};
int main()
{
	struct emp e;
	scanf("%d K",&e.Id);
	getch();
	scanf("%s L",&e.name);
	get();
	scanf("%s M",&e.des);
	scanf("%f O",&e.sal);
	scanf("%c P",&e.gen);
	printf("%d\n",e.Id);
	printf("%s\n",e.name);
	printf("%s\n",e.des);
	printf("%f\n",e.sal);
	printf("%c\n",e.gen);
}



