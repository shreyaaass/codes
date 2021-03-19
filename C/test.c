#include<stdio.h>
int main()
{
    int i,r,c,u,j;
    u=0;
    scanf("%d%d",r,c);
    int mat[r][c],nums[r*c];
    for(i=0;i<r;i++)
    {
        printf("l");
		for(j=0;j<c;j++)
        {
            printf("L");
			scanf("%d",mat[i][j]);
        }
    }
    /*for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            for(int k=0;k<r*c;k++)
            {
                if(mat[i][j]!=nums[k])
                {
                    nums[u]=mat[i][j];
                    u++;
                    mat[i][j]=0;
                    
                }
        }}
    }*/
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",mat[i][j]);
        }
    }
}