#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j<=n-i-2; j++)
        {
            cout<<"\t";
        }
        for (int j = 0; j<=i; j++)
        {
            cout<<"*\t";
        }
        cout<<endl;
    }
    
}