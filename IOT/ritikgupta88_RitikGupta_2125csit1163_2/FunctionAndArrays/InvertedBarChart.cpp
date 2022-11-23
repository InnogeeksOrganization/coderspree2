#include<iostream>
#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int p=*max_element(arr,arr+n);
    for(int i=0;i<p;i++){
        for(int j=0;j<n;j++){
            if(arr[j]>0){
                cout<<"*\t";
                arr[j]--; 
                }
            else
            cout<<"\t";
        }
        cout<<endl;
    }
    
  //write your code here


}