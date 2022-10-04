#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,a=0,b=1,c;
    cin>>n;
   
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        { 
        if(i==1)
        cout<<"0 ";
        else if(i+j==3)
         cout<<"1 ";
         else {c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;}
        }
        cout<<endl;
    }
    
    return 0;
}