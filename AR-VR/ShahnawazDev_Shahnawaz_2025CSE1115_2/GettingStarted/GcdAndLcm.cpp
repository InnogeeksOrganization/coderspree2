#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;

    int gcd,lcm,i=1,small;
    small = (num1 < num2) ? num1 : num2;
    while(i<=small)
    {
        if(num1%i==0 && num2%i==0)
            gcd=i;
        i++;
    }
    i = (num1 > num2) ? num1 : num2;
    while(i < (num1*num2))
    {
        if(i%num1==0 && i%num2==0)
        {
            lcm = i;
            break;
        }    
        i++;
    }
    cout<<gcd<<endl<<lcm;
    return 0;
}