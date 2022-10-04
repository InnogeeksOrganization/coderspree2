#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,c=1;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        cout<<c++<<" ";
        
        cout<<endl;
    }
    return 0;
}