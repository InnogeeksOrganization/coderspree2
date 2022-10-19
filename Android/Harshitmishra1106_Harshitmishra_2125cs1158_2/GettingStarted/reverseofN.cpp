#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    long int n,a,b,s=0;
    cin>>n;
    if(n>=1){while(n!=0){
        a=n%10;b=n-a;
        n=b/10;s=10*s+a;
    }
    cout<<s;}
    return 0;
}
