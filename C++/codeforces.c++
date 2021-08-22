#include<cmath>
#include<iostream>
using namespace std;
int main()
{
    int i,t,j,n,flag,copyL,x;
    flag=0;
    x=0;
    cin>>t;
    for(i=0;i<t;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        n=(abs(a-b))*2;
        x=c+int(abs(a-b));
        //cout<<n<<endl;
         if(c>n||n==2||x>n)
        {
             flag=1;
            //cout<<c<<"   "<<abs(a-b)<<"   -1"<<endl;
           cout<<-1<<endl; 
        }
        else
        {
            cout<<x<<endl;
        }
        
}
}