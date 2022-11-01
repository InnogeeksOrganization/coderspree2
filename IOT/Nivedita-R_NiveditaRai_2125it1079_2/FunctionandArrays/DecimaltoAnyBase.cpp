#include<iostream>
#include<cmath>
using namespace std;
int DecToAny(int n, int b) {
    int i=0,d,r,s=0;
    while(n != 0)
    {
        d = n % b;
        s = s + d * pow(10.0,i);
        n = n / b;
        i++;
    }
return s;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = DecToAny(n, b);
  cout << res << endl;
}