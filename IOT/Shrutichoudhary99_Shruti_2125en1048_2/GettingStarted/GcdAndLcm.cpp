#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2,gcd,lcm,rn1,rn2;
    cin >> num1 >> num2;
    rn1=num1;
    rn2=num2;
    int rem;
while(num1 % num2!=0)
{
    rem=num1%num2;
    num1=num2;
    num2=rem;
}
gcd=num2;
lcm=(rn1*rn2)/gcd;
cout<<gcd<<endl<<lcm;
    
}