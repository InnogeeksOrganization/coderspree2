#include<iostream>
using namespace std;


int main(){
    int n,i;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d;
    cin>>d;
    for(i=0;i<n;i++){
        if(arr[i]==d){
        cout<<i;
        break;
        }
     }
     if(i==n)
        cout<<-1;
    
    //write your code here
    
    
}