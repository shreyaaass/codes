#include<stdio.h>
int main()
{
    int a,b,i,j;
    float k,l;
    char p[20];
    scanf("%d",&a);
    for (i=0;i<a;i++)
    {
        scanf("%d",&b);
        for (j=0;j<b;j++)
        {
            scanf("%s",&p);
            scanf("%f",&l);
            k=k+l;
        }
    }
    
    printf("%.01f",k);
}