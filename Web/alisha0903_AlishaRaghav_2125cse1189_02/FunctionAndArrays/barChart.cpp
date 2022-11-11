#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    //write your code here
    int n,i,j,m;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    m=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>m)
        m=a[i];
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(m-a[j]<=i)
            cout<<"* ";
            else
            cout<<"  ";
        }
        cout<<endl;
        
    }
    return 0;
    
}