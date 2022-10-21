#include <bits/stdc++.h>
using namespace std;
int AnyToDec(int n, int b) {
    int a = 0, count = 0, p;
    while(n != 0){
        p = n % 10;
        a = a + p * pow(b,count);
        n = n / 10;
        count++;
    }
    return a;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}