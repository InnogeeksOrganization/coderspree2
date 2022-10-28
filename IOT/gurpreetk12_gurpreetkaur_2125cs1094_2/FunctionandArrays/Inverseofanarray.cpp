#include<iostream>
using namespace std;

int* inverse(int* arr, int n){
    for(int i=0;i<n;i++)
    { 
        for(int j=0;j<n;j++)
        {
            if(i==arr[j])
            {
                cout<<j<<"\n";
                break;
            }
        }
    }
    
}


int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    
    int* inv = inverse(arr,n);
    //display(inv,n);
    
}