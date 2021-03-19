#include<stdio.h>
#include<string.h>
void subs(char inps[],char subs1[])
{
    char s[100]="";
	int i,j;
	int d=0;
	for (i=0;i<strlen(inps)-3;i++)
	{
	    for(j=i;j<i+strlen(subs1);j++)
	     {
			s[j-i]=inps[j];		
		 }
		if (strcmp(s,subs1)==0)
        {
            d=1;    
            printf("%d",i+1);
            break;
        }
	}

    if (d==0)
    printf("-1");
}
	

int main()
{
    subs("shreyas","a");
}

