#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char const *argv[])
{
    int n,a=0,b=1,i,c;
    cin>>n;
    if(n==1)cout<<a;
    else if(n==2)cout<<a<<endl<<b<<endl;
    else if(n>2&&n<=40){
        cout<<a<<endl<<b<<endl;
        for(i=3;i<=n;i++){
            c=a+b;a=b;b=c;
            cout<<c<<endl;
        }}
    return 0;
}
