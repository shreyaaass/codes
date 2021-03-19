#include<stdio.h>
struct book
{
	char name[20];
	int bnum;
	char author[20];
	double review;		
};
int main ()
{
	struct book b;
	getchar();
	scanf("%s \n",&b.name);
	scanf("%d \n",&b.bnum);
	getchar();
	scanf("%s\n",&b.author);
	scanf("%d\n",&b.review);	
	printf("%d\n",b.name);
	printf("%d\n",b.bnum);
	printf("%s\n",b.author);
	printf("%d",b.review);
}
