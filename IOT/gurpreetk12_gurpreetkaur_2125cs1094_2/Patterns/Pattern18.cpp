#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int q=n/2;
    int q1=q+1;
    for(int i=1;i<=n;i++)
    {
        cout<<"*"<<"\t";
    }cout<<"\n";
    for(int i=1;i<=q;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"\t";
        }
        cout<<"*"<<"\t";
        int g=2*i;
        for(int j=1;j<=(n-g-2);j++)
        {   
            cout<<"\t";
        }
        if(i!=q)
        {
            cout<<"*";
        }
        
        cout<<"\n";
    }
    for(int i=0;i<q;i++)
    {
        for(int j=1;j<q-i;j++)
        {
            cout<<"\t";
        }
        for(int j=1;j<=3+(2*i);j++)
        {
            cout<<"*"<<"\t";
        }cout<<"\n";
    }
}