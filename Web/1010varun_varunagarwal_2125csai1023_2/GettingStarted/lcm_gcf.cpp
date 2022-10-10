#include <iostream>
using namespace std;
#define ll long long

int main(int argc, char **argv){
    ll num1, num2, hcf, lcm, small;
    cin >> num1 >> num2;
    small = (num1 < num2)?num1:num2;
    for(int i = 1; i <= small; i++){
        if(num1%i == 0 && num2%i == 0)hcf = i;
    }
    cout << hcf << endl << (num1*num2)/hcf;
}