#include<iostream>
using namespace std;

int main(){
    int n,dig;
    cin>>n;
    while(n!=0){
        dig = n%10;
        cout<<dig<<endl;
        n = n/10;
    }
    return 0;
}