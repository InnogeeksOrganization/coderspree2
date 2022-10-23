#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,arr[100],i=0,q;
    cin >> n;
    while(n!=0)
    {
        q=n%10;
        n=n/10;
        arr[i]=q;
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<arr[j]<<endl;
    }
    
}