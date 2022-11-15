#include<iostream>
using namespace std;

void rotate(int* arr, int n, int k){
    int r=k;
   if(r>0)
   {
       if(r<n)
       {for(int i=n-k;i<n;i++)
       {
           cout<<arr[i]<<" ";
       }
       for(int i=0;i<n-k;i++)
       {
           cout<<arr[i]<<" ";
       }}
       else
       {
           k=r%n;
           for(int i=n-k;i<n;i++)
       {
           cout<<arr[i]<<" ";
       }
       for(int i=0;i<n-k;i++)
       {
           cout<<arr[i]<<" ";
       }
       }
   }
   else
   {    k=k*-1;
        if(k<n)
       {for(int i=k;i<n;i++)
       {
           cout<<arr[i]<<" ";
       }
       for(int i=0;i<k;i++)
       {
           cout<<arr[i]<<" ";
       }}
       else
       {
           k=k%n;
           for(int i=k;i<n;i++)
       {
           cout<<arr[i]<<" ";
       }
       for(int i=0;i<k;i++)
       {
           cout<<arr[i]<<" ";
       }
           
       }
   }
  
    
}



int main(){
    int n, r;
    cin>>n;
    int* arr = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    cin>>r;
    
    rotate(arr,n,r);
    //display(arr,n);
}