#include<iostream>
using namespace std;
int main(){
    int a[10000000],n,d,k=0;
    cin>>n; 
    for(int i=0;i<n;i++)
    cin>>a[i];
    cin>>d;
    for(int i=0;i<n;i++){
        if(a[i]==d){
        cout<<i;
        k++;}
    }
    if(k==0)cout<<"-1";
    return 0;
}