#include <stdio.h>
int linear(int n, int arr[],int k)
{
    int i;
    for (i = 0; i < k; i++)
    {
        if (arr[i] == n)
        {
            printf("index of %d is %d\n",n,i);
            return 0;
        }
    }
    return 1;
}
int main()
{
    int k, j,n;
    printf("Enter the number of elements in the array to be searched:\t");
    scanf("%d", &k);
    int arr[k];
    printf("Enter the elements of the array:\n");
    for (j = 0; j < k; j++)
        scanf("%d", &arr[j]);
    printf("Enter the number to be searched:\t");
    scanf("%d",&n);
    linear(n, arr,k);
}
