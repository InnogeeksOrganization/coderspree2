#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int arr[10000],arr1[10000];
    for(i=0;i<n;i++)
    cin>>arr[i];
    for(i=0;i<n;i++)
    arr1[i]=arr[n-i-1];
    for(i=0;i<n;i++)
    cout<<arr1[i]<<" ";
    return 0;
}