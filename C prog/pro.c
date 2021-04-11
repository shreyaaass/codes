#include <stdio.h>
int main()
{
int m, n, p, q, i, j, k, sum = 0;
printf("Enter the number of rows and columns of first matrix\n");
scanf("%d%d", &m, &n);
int first[m][n];
printf("Enter the number of rows and columns of second matrix\n");
scanf("%d%d", &p, &q);
int second[p][q],multiply[m][q];
if (n != p)
printf("Matricemultiplication not possible");
else
{ 
    printf("Enter the elements of first matrix\n");
    for (i = 0; i < m; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &first[i][j]);
    printf("Enter the elements of second matrix\n");
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            scanf("%d", &second[i][j]);
    for (i = 0; i < m; i++) 
    {
        for (j = 0; j < q; j++) {
            multiply[i][j]=0;
            for (k = 0; k < p; k++) 
            {
                multiply[i][j] = multiply[i][j] + first[i][k]*second[k][j];
            }
        }
    }
    printf("Product of entered matrices:-\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++)
            printf("%d\t", multiply[i][j]);
printf("\n");
}
}
}