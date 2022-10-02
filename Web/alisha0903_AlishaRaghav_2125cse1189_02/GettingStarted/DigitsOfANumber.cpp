#include <iostream>
using namespace std;
int main()
{
    int n,rev=0,r;
    cin>>n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    while(rev>0)
    {
        r=rev%10;
        cout<<r<<endl;
        rev/=10;
    }
    return 0 ;
}

