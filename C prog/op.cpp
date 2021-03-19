#include<stdio.h>
int main()
{
	int m,i,j,n,k,c,num,sum;
	c=sum=0;
	scanf("%d%d",&m,&n);
	int mat[m][n];
	for (i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
	for (i=1;i<m-1;i++)
		{
			for(int j=0;j<m;j++)
			{
            	if(mat[i-1][j]==mat[i+1][j])
                	c++;
            	else
                	break;
			}
		}
	if(c==(m*n)-2*n)
	{
		printf("yes\n");
	for (i=0;i<2;i++)
	{
		for(j=0;j<n;j++)
		{
			sum=sum+mat[i][j];
			printf("%d ",mat[i][j]);
		}
		printf("\n");	
	}
	if(m%2==0)
	sum=sum*(m/2);
	else
	{
		for(j=0;j<n;j++)
			k=k+mat[0][j];
		sum=sum*(m/2)+k;
	}
	printf("%d\n",sum);
	}
	else
	{
		printf("no\n");
		for (i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i%2==0)
				{
					num=mat[0][j];
					printf("%d ",mat[1][j]);
				}
				else
				{
					num=mat[1][j];
					printf("%d ",mat[0][j]);
				}
				sum=sum+num;
			}
			printf("\n");
		}
		printf("%d",sum);
	}
	}
