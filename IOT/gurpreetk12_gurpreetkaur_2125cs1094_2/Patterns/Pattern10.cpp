#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int q=n/2;
    q++;
    for(int i=0;i<q;i++)
    {
        for(int j=1;j<q-i;j++)
        {
            cout<<"\t";
        }cout<<"*";
        for(int j=0;j<=(2*i)-1;j++)
        {
            cout<<"\t";
        }
        if(i!=0)
        {cout<<"*";}
        cout<<"\n";
    }
    for(int i=1;i<q;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"\t";
        }
        cout<<"*";
        for(int j=1;j<(n-2*i);j++)
        {
            cout<<"\t";
        }
        if(i!=q-1)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}