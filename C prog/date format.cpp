#include<stdio.h>
#include<string.h>
int main()
{
	int i,seploc[2],c;
	char s[10],arr[20];
	getchar();
	scanf("%[^\n]c",arr);
	c=0;
	for(i=0;i<sizeof(arr);i++)
	{
		if(s[i]!='/'||s[i]!='-')
		{
			printf("%d",i);
			seploc[c]=i;
			c++;	
		}	
	}
	printf("%d",seploc[1]-seploc[0]-1);
}
