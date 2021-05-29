#include <stdio.h>
void bubble(int arr[], int n)
{
    int i, j, t;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
int main()
{
    int arr[5] = {65, 22, 8, 5, 2};
    bubble(arr, 5);
}