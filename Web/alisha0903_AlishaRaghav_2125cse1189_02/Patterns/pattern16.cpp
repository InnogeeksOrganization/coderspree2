#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i>=j)
            cout<<j;
            else cout<<" ";
        }
        for(k=n-1;k>=1;k--)
        {
            if(k>i)
            cout<<" ";
            else cout<<k;
        }
        cout<<endl;
    }
}