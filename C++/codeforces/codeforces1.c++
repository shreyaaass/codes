#include<iostream>
using namespace std;
int main()
{
    int t,c,a,b,i;
    float c1;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>b>>a;
        c=a/2;
        c1=a/2;
        if(a-b>=c1 && a-b!=0){
            // if(a%2==0)
            // cout<<c-1<<endl;
            // else
            // cout<<c<<endl;
            cout<<a%(c+1)<<endl;
        }
        else if(a==0 && b==0)
            cout<<0<<endl;
        else{
        
           //cout<<a%b;
            cout<<a%b<<endl;
        }

    }

}
// 1 1
// 999999999 1000000000
// 8 26
// 1 999999999