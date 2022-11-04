#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max=a[0];
    int min=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i])
        max=a[i];
        
        if(min>a[i])
                min=a[i];
    }
    
    int span=max-min;
    cout<<abs(span)<<endl;
}