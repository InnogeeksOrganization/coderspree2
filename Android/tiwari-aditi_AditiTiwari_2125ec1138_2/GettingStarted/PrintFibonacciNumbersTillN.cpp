#include<iostream>
using namespace std;

int main(){
    int n, a=0 ,b=1,i,c;

    cin>>n;
    cout<<"First "<<n<<" Fibonacci terms:\n"<<a<<" "<<b<<" ";
    for(i=3;i<=n;i++){
        c = a+b;
        a = b;
        b = c;
        cout<<c<<" ";
    }
    return 0;
}