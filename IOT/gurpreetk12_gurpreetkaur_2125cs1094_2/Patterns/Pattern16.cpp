#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int b=n;
    int q=2*b+3;
    for(int i=1;i<=n;i++)
    {
            q=2*b-3;
            if(q<0)
            {
                for(int j=1;j<=i;j++)
                {
                    cout<<j<<"\t";
                }
                for(int j=i-1;j>=1;j--)
                {
                    cout<<j<<"\t";
                }
            }
            else
             {   for(int j=1;j<=i;j++)
                {
                    cout<<j<<"\t";
                }
                for(int j=1;j<=q;j++)
                {
                    cout<<"\t";
                }
                q=2*(n-i)+3;
                for(int j=i;j>=1;j--)
                {
                    cout<<j<<"\t";
                }
             }
            b=b-1;
            cout<<"\n";
    }
}