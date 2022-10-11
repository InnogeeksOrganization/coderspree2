#include<iostream>
using namespace std;

int main()
{
    int n1,n2,a,b,i,gcd,lcm;
    cin>>n1>>n2;
    a=max(n1,n2);
    b=min(n1,n2);
    cout<<"gcd of 2 numbers = ";
    if(a%b==0)
    cout<<b<<endl;
    else
    {
       for(i=1;i<b;i++)
      {
          if(b%i==0)
          gcd=i;
      }
      cout<<gcd<<endl;
    }
    lcm=(n1*n2)/gcd;
    cout<<"lcm = "<<lcm<<endl;
    return 0;
}