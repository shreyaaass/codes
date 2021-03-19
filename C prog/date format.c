#include<stdio.h>
#include<string.h>
int main()
{
	int i,seploc[2],c;
	char arr[20],s[10],date[2],month[10],year[5];
	scanf("%[^\n]c",&arr);
	c=0;
	for(i=0;i<sizeof(arr);i++)
	{
		if(arr[i]==47||arr[i]==45)
		{
			printf("%d\n%c\n",i,arr[i]);
			seploc[c]=i;
			c++;	
		}	
	}
	printf("%d",seploc[1]-seploc[0]-1);
	/*if(b>2)
	{
		for(j=0;j<2;j++)
		 {
			date[j]=arr[j];
		 }
		 printf("%s/",date)
		for(j=3;j<seploc[1];j++)
		 {
			month[j]=arr[j];
		 }
		for(j=seploc[1]+1;j<sizeof(arr);j++)
		{
			year[j]=arr[j];
		}
		for(j=0;j<24;j++)
		{
			if(strcmp(monthnum[j][0],month)==0)
			{
				printf("%s/",monthnum[j][1]);
				break;
			}
		}
		printf("%s",year);
	
	*/}
