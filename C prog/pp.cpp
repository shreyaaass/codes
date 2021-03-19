#include<stdio.h>
int main()
{
    int n,a,k,i,j,num,b,copy,l;
    copy=n;
    num=0;
    l=10000;
    scanf("%d%d%d",&n,&a,&b);
    for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
        {
        int k=copy/l;
        copy=copy-k*(l*10);
        if(5-j==a||5-j==b)
        k=i;
        num=num+k*(l*10);
        l=l/10;
    printf("%d",num);
            
        }
    printf("%d\n",num);
    }    
}
