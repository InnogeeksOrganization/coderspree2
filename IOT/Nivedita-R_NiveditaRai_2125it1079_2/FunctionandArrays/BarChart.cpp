#include<iostream>
using namespace std;


int main(){
    int n,i,j,k;
    int *arr;
    cin>>n;
    arr=(int*)malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        max=arr[i];
    }
    for(i=0;i<max;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[j]>=max-i)
            cout<<"*\t";
            else
            cout<<"\t";
        }
        cout<<endl;
    }
    return 0;
}
    