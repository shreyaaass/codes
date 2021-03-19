#include<stdio.h>
int main()
{
    int r,c,i,j,flag,k,u,ele;
    u=0;
    scanf("%d",&r);
    scanf("%d",&c);
    int a[r][c],b[r][c],C[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
    {
        scanf("%d",&a[i][j]);
    }
    }
int elem[50];
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        flag=0;
        ele=a[i][j];
        for(k=0;k<20;k++)
        {
            if(ele==elem[k])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            elem[u]=ele;
            b[i][j]=ele;
            u++;
        }
        else
        {
            b[i][j]=0;
        }
    
        C[i][j]=a[i][j]-b[i][j];            
        }
    }

for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    printf("\n %d",b[i][j]);
}

    for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
        {
            printf("%d\n",C[i][j]);
}
            
        }
}
