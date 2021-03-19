#include <stdio.h>
#include <string.h>

int main ()
{
  int monthnum,i,b,c,k,seploc[2],j;
  b=c=k=0;
  char arr[20],date[3][10];
  char months[12][10] = {"January",   "February", "March",    "April", "May",       "June",     "July",     "August","September", "October",  "November", "December"};
  char months2[12][10] = {"Jan", "Feb", "Mar", "Apr","May", "Jun", "Jul", "Aug","Sep", "Oct", "Nov", "Dec"};
  scanf("%[^\n]c",&arr);
  char * pch;
  pch = strtok (arr,",-/");
 for(i=0;i<sizeof(arr);i++)
	{
		if(arr[i]==47||arr[i]==45)
		{
			printf("%d\n%c\n",i,arr[i]);
			seploc[c]=i;
			c++;	
		}	
	}
	printf("%d\n",seploc[1]-seploc[0]-1);
	if (k>2)
	{
  while (pch != NULL)
  {
    b++;
    if (b==1)
    {
    	printf ("%s",pch);
    	//date[0]=pch;
	}
	else if(b==2)
	{
	for(i=0;i<12;i++)
    {
    	if(strcmp(pch,months[i])==0||strcmp(pch,months2[i])==0)
    		{
			printf("/%d",i+1);
			//date[2]=i;
    		break;
    	}
	//printf("%d",i);
  }
}
	else if(b==3)
  {
  	printf("/%s",pch);
  }
	pch = strtok (NULL, "/-");
}
}
else
{
	printf("%c%c/%c%c/",arr[3],arr[4],arr[0],arr[1]);
	for(j=6;j<sizeof(arr);j++)
	{
		printf("%c",arr[j]);
	}
}
  //printf("%s\n%s\n%s",date[1],date[2],date[3]);
  return 0;
}
