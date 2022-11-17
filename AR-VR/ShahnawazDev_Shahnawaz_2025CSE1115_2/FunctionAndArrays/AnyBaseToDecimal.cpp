#include<iostream>
#include<cmath>
using namespace std;
int AnyToDec(int n, int b) {
    int p=0,num=0;
    while(n)
    {
        num= num+(n%10)*pow(b,p);
        n/=10;
        p++;
    }
    return num;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}