#include<iostream>
using namespace std;
int DecToAny(int n, int b) {
int ans = 0, multiplier = 1;//multiplier for adjusting place of each digit
    while (n > 0)
    {
      int a = n % b;
      n = n / b;
      ans = ans + a * multiplier; 
      multiplier = multiplier*10;
    }
    return ans;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int ans = DecToAny(n, b);
  cout << ans << endl; 
  return 0;
}