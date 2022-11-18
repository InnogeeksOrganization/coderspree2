#include<iostream>
using namespace std;

int* inverse(int* arr, int n){
    int *arr1= new int[n];
    int j=0;
    for(int i=0;i<n;i++)
    {
        j=arr[i];
        arr1[j]=i;
    }
    return arr1;
}

void display(int* arr, int n){
    for(int i = 0 ; i < n; i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    
    int* inv = inverse(arr,n);
    display(inv,n);
    
}