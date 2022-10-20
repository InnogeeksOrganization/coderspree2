#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<abs(n/2-i); j++)
        {
            cout<<"\t";
        }
        for(int j=0; j<n-2*abs(n/2-i); j++)
        {
            cout<<"*\t";
        }
        cout<<"\n";
    }
    return 0;
}