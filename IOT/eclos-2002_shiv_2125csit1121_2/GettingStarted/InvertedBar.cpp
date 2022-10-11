#include <iostream>
using namespace std;
int main() {
    int n, m=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>m)
            m=a[i];
    }
    for(int i=0;i<m;i++){
    for(int i=0;i<n;i++){
        if(a[i]==0)
            cout<<" ";
        else{
            cout<<"*";
            a[i]--;
        }
    }
    cout<<"\n";
    }
}
