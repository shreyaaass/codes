#include<stdio.h>
void largest(int arr[], int n)
{
    int i;
    int b=arr[0];
    for ( i = 0; i <n-1; i++)
    {
        if (b<arr[i+1])
        {
            b=arr[i+1];
        }
        
    }
    printf("%d",b);
}
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
    largest(arr,n);
}
