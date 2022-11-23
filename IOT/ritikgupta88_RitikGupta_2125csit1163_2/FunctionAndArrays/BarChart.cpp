#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int p=*max_element(arr, arr + n);
    for(int i=p;i>=1;i--){
        for(int j=0;j<n;j++){
            if(arr[j] >= i)
            cout<<"*\t";
            else
            cout<<"\t";
            
        }
        cout<<endl;
    }
    
    //write your code here
    
    
}