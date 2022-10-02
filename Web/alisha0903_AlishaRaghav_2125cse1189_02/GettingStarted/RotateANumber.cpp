#include <iostream>
#include <cmath>
using namespace std;
int main()
{
int n,k,rev=0,r;
cin>>n>>k;
r=pow(10,k);
rev=n%r;
while(k--)
{

n/=10;
}

cout<<rev<<n<<endl;
return 0;
}