#include<iostream>
using namespace std;
int main()
{
    int stages=4,m,n,cost[9],d[9],path[4];
    n=8;
    int c[9][9]=
      {{0,0,0,0,0,0,0,0,0},
       {0,0,2,1,3,0,0,0,0},
       {0,0,0,0,0,2,3,0,0},
       {0,0,0,0,0,6,7,0,0},
       {0,0,0,0,0,0,8,9,0},
       {0,0,0,0,0,0,0,0,6},
       {0,0,0,0,0,0,0,0,4},
       {0,0,0,0,0,0,0,0,5},
       {0,0,0,0,0,0,0,0,0}};
    cost[n]=0;
    for(int i=n-1;i>=0;i--)
    {
        m=32676;
        for(int k=i+1;k<=n;k++)
        {
            if(c[i][k]!=0 && c[i][k]+cost[k]<m)
            {
                m=c[i][k]+cost[k];
                d[i]=k;
            }
        }
        cost[i]=m;
    }
    path[0]=1,path[stages]=8;
    for(int i=1;i<=stages;i++)
    {
        path[i]=d[path[i-1]];
    }
    for(int i=0;i<stages;i++)
    {
        cout<<path[i]<<" ";
    }
}
/*Algo:
1. Initialize cost[n] as 0
2.start from n-1 to 0
3. for each i from n-1 to 0 find the minimum cost from i+1 to k if a path exists
4. update cost[i] as minimum cost from i+1 to k
5. update d[i] as k
6.initialise the first point and the last point as 1 and n respectively
7.for each stage find the optimal path taken
8. print the path

*/