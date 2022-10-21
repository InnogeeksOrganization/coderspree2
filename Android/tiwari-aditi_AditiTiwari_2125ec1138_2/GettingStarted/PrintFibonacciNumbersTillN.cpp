#include<iostream>
using namespace std;

int main(){
    int n, a=0 ,b=1,i,c;

    cin>>n;
    cout<<a<<endl<<b<<endl;
    for(i=3;i<=n;i++){
        c = a+b;
        a = b;
        b = c;
        cout<<c<<endl;
    }
    return 0;
}