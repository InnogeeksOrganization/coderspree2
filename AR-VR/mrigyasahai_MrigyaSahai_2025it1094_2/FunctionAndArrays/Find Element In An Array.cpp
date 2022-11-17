#include<iostream>
using namespace std;

int findElement(int* a, int n, int d){
    
    for(int i = 0 ;i < n; i++){
        if(a[i]==d){
            return i;
        }
    }
    return -1;
}

int main(){
    int n,d;
    cin>>n;
    int a[50];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>d;
    int x = findElement(a,n,d);
    cout<<x<<endl;
}
