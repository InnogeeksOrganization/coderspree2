#include<iostream>
#include<cmath>
using namespace std;

int getSum(int b, int n1, int n2) {

    int sum=0,carry=0,nn=0,p=1;
    while(n1>0||n2>0)
    {
        nn = (n1%10)+(n2%10) + carry;
        sum = sum + ((nn % b) * p);
        n1/=10;
        n2/=10;
        p *= 10;
        carry = nn/b;
    }
    nn = (n1%10)+(n2%10) + carry;
    sum = sum + ((nn % b) * p);

    return sum;
}

int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getSum(b, n1, n2) << endl;
}