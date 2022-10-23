#include<iostream>
// #include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   int arr[n],min=-9999,max=-9999;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
        min=arr[0];
        max=arr[0];
   }
   for(int i=0;i<n;i++)
   {
       
       if(arr[i]>max)
       {
           max=arr[i];
           
       }
      else if(arr[i]<min)
       {
           min=arr[i];
       }
   }
   cout<<max-min;
   
   
    
}