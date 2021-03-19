#include<stdio.h>
int main()
{
	int grades[6]={2,3,4,5,6,7};
	int *ptr=grades;
	printf("%d\n",&grades[0]);
	printf("%d\n",++ptr);
}
