#include <iostream>
#include <iomanip>
using namespace std;
int hcf(long int,long int);
int main()
{
    long int a,b,c;
    cin>>a>>b;
    c=hcf(a,b);
    cout<<c<<"\n";
    cout<<(a*b)/c;
    return 0;
}

int hcf(long int n1,long int n2)
{
    if(n2!=0)
    {
        return hcf(n2,n1%n2);
    }
    else{
        return n1;
    }
}