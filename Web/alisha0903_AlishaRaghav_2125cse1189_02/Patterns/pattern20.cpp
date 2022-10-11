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
          if(j==1||j==n||(i>n/2&&(i==j))||(i>n/2&&(i+j==n+1)))
          cout<<"* ";
          else cout<<"  ";
        }
        cout<<endl;

    }
    return 0;
}