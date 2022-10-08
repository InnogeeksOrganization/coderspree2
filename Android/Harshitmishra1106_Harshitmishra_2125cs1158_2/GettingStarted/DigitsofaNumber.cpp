#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    long int n,a,b;
    cin>>n;
    if(n>=1){while(n!=0){
        a=n%10;b=n-a;n=b/10;cout<<a<<endl;
    }}
    return 0;
}
