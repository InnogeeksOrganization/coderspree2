#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=max)
        {
            max=arr[i];
        }
    }
    for(int i=max;i>0;i--)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[j]>=i)
            {
                cout<<"*\t";
            }
            else
            {
                cout<<"\t";
            }
            
        }cout<<"\n";
    }
}