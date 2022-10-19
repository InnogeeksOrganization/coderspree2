#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=1;
    int q=n/2;
    for(int i=1;i<=n;i++)
    {
        if(i<q+1)
        {
            for(int j=1;j<=q;j++)
            {
                cout<<"\t";
            }
            for(int j=1;j<=i;j++)
            {
             cout<<"*"<<"\t"; 
            }
        }
        if(i==q+1)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<"*"<<"\t";
            }
        }
        if(i>q+1)
        {   
            for(int j=1;j<=q;j++)
            {
                cout<<"\t";
            }
            for(int k=1;k<=q+1-c;k++)
            {
                cout<<"*"<<"\t";
            }c++;
        }
            cout<<"\n";
    }
}