#include<iostream>
using namespace std;
int main()
{
    int n;
    n=5;
    for(int i=0;i<n;i++)
    cout<<"*";
    cout<<endl;
    for (int i = 0; i < n-2; i++)
    {
        for (int j = 1; j < n-i-1; j++)
        {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    for(int i=0;i<n;i++)
    cout<<"*";
    return 0;
}