#include<iostream>
using namespace std;


int main(){
    //write your code here
    int n,i,d,s=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>d;
    for(i=0;i<n;i++)
    {
        if(d==a[i]){
            s++;
            break;
        }
    }
    if(s==0)
    cout<<"-1"<<endl;
    else
    cout<<i;
    return 0;
    
}