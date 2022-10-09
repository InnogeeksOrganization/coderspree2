#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;

    //write your code here
    int t1=num1,t2=num2,rem,gcd,lcm;
while(num1%num2!=0){
    rem=num1%num2;
    num1=num2;
    num2=rem;
}
gcd=num2;
lcm=(t1*t2/gcd);
cout<<gcd<<"\n";
cout<<lcm<<"\n";
//DONE
}