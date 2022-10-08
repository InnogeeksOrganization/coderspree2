#include <iostream>
using namespace std;
int main(){
    int num1, num2;
    cin >> num1 >> num2;
    int t1,t2,gcd,lcm;
    t1=num1;
    t2=num2;
    while (num1 % num2 != 0)
    {
      int remainder = num1 % num2;
      num1 = num2;
      num2 = remainder;
    }
    gcd = num2;
    lcm = (t1 * t2) / gcd;
    cout<<gcd<<endl<<lcm;
    return 0;
}