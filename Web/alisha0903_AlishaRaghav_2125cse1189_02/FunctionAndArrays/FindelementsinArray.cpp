#include<iostream>
using namespace std;


int main(){

    int n,i,d,c=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    cin>>d;
    for(i=0;i<n;i++)
    {
        if(d==a[i])
        {c++;
        break;}
        
    }
    if(c==0)
    cout<<"-1"<<endl;
    else
    cout<<i<<endl;
    return 0;
    
    
}