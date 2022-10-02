#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int n,r,num=0,c=0,n1;
    cin>>n;
    n1=n;
    while(n1>0)
    {
        r=n1%10;
        c++;
        num+=pow(10,r-1)*c;
        n1/=10;
    }
    cout<<num<<endl;
   return 0; 
}