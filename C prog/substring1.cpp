#include<stdio.h>
#include<string.h>
void subs(char inps[])
{
    char s[100]="";
	int arr[20][2];
	int i,j,k,o;
	scanf("%d",&k);
	char sp[100][20];
	int d=o=0;
	for (i=0;i<strlen(inps)-4;i++)
	{
		d=0;
		for(j=i;j<i+k;j++)
	     {
			s[j-i]=inps[j];		
		 	if (s[j-i]=='a'||s[j-i]=='e'||s[j-i]=='i'||s[j-i]=='o'||s[j-i]=='u')
		 		d++;
		 }
		 arr[i][0]=d;
		 arr[i][1]=i;
		 strcpy(sp[i],s);
		 puts(sp[i]);
		 printf(" %d %d\n",d,i);
	
	}
	int h=arr[0][0];
	for(i=1;i<strlen(inps)-k;i++)
	{
		if(arr[i][0]>h)
			h=arr[i][0];
			j=arr[i][1];
	}
	printf("%d",h);
  
    
}

int main()
{
    char inps[20];
    getchar();
    scanf("%s",inps);
	subs(inps);
}

