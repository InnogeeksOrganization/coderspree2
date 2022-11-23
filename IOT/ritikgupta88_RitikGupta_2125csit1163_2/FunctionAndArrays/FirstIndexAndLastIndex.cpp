#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    int data,k=0,p=0;
    cin>>data;
    for(int i=0;i<n;i++){
        if(data!=arr[i])
        p++;
        else if(data==arr[i])
        k++;
        if(data==arr[i] && data!=arr[i+1] )
        break;
     }
     if(p==n)
     cout<<-1<<endl<<-1;
     else
     cout<<p<<endl<<p+k-1;
    
    // write your code here
    
    
}