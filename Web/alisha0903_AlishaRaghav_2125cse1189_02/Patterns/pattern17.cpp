#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i==n/2+1||j==n/2+1||(j>n/2&&j-n/2<=i&&i<=n/2)||(i>n/2&&j>n/2&&n-i+1>=j-n/2))
            cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}