#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;
    int a,b,gcd,lcm;
    a=num1;
    b=num2;
    while(num1% num2 !=0)
    {
        int rem= num1 % num2;
        num1=num2;
        num2=rem;
    }
    gcd=num2;
    lcm=(a * b)/gcd;
    cout<<gcd<<endl<<lcm;
    return 0;

    //write your code here
    
}