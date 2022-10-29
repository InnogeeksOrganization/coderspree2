#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int q=n/2;
    q++;
    for(int i=1;i<=q;i++)
    {
        if(i==1)
        {
            for(int j=1;j<=q;j++)
            {
                cout<<"*"<<"\t";
            }
            for(int j=1;j<q-1;j++)
            {
                cout<<"\t";
            }cout<<"*";
        }
        else if(i==q)
        {
            for(int j=1;j<=n;j++)
            {
                cout<<"*"<<"\t";
            }
        }
        else
        {
            for(int i=1;i<q;i++)
            {
                cout<<"\t";
            }
            cout<<"*";
            for(int i=1;i<q;i++)
            {
                cout<<"\t";
            }cout<<"*";
        }
        
        cout<<"\n";
    }
    for(int i=1;i<q;i++)
    {
        if(i!=q-1)
        {
            cout<<"*"<<"\t";
            for(int j=2;j<q;j++)
            {
                cout<<"\t";
            }
            cout<<"*";
        }
        else
        {   cout<<"*"<<"\t";
            for(int j=2;j<q;j++)
            {
                cout<<"\t";
            }//cout<<"*"<<"\t";
            for(int j=1;j<=q;j++)
            {
                cout<<"*"<<"\t";
            }
        }cout<<"\n";
    }
}