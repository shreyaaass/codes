#include <stdio.h>
int binarysearch(int k, int arr[], int n)
{
    int f, m, l, c;
    f = 0;
    l = n - 1;
    m = (f + l) / 2;
    while (f <= l)
    {
        m = (f + l) / 2;
        if (k > arr[m])
        {
            printf("%d | %d\n", k, arr[m]);
            f = m + 1;
        }
        else if (k < arr[m])
        {
            printf("%d | %d\n", k, arr[m]);
            l = m - 1;
        }
        else if (k == arr[m])
        {
            printf("Found");
            c = 0;
            return 0;
        }
    }
    printf("Not found");
    return 1;
}
int main()
{
    int arr[5] = {2, 3, 4, 5, 6};
    binarysearch(2, arr, 5);
}