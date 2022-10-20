#include<iostream>
#include<cmath>
using namespace std;
int AnyToDec(int n, int b) {
    int ans = 0 ,multiplier = 0;
    while (n > 0) {
      int a = n % 10;
      n = n / 10;
      ans = ans + a * pow(b, multiplier);
      multiplier++;
    }
    return ans;
}
int main() { 
  int n;
  int b;//for base of num entered
  cin >> n;cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}