#include <stdio.h>
 int main()
{
	int i, j, Count,n;
	printf("\n Please Enter Number of elements in an array  :   ");
	scanf("%d", &n);
    int arr[n], freq[n];	
	for (i = 0; i < n; i++)
	{
    	printf("Enter element %d  :",i+1);
        scanf("%d", &arr[i]);
    	freq[i] = -1;
   	}     
    for (i = 0; i < n; i++)
	{
		Count = 1;
		for(j = i + 1; j < n; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
    			freq[j] = 0;
    		}
    	}
    	if(freq[i] != 0)
    	{
    		freq[i] = Count;
		}
	}
 	for (i = 0; i < n; i++)
  	{
  		if(freq[i] != 0)
  		{
  			printf("%d Occurs %d Times \n", arr[i], freq[i]);
		}		
  	}	     
}