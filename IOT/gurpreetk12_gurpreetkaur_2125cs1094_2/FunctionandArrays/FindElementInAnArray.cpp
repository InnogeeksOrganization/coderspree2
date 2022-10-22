#include<iostream>
using namespace std;

int main(){
    int n,c=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int d;
    scanf("%d",&d);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==d)
        {
            cout<<i;
            c++;
            break;
        }
        
    }
    if(c==0)
    {
        cout<<"-1";
    }
    
    
}