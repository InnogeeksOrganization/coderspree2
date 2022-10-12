#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int mid=n/2;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(abs(i-mid)+abs(j-mid)==mid)
            {
                cout<<"*\t";
            }
            else
            {
                cout<<"\t";
            }
        }
        
        cout<<endl;
    }
    return 0;
}