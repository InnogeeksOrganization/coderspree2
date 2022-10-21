#include<iostream>
using namespace std;
int DecToAny(int n, int b){
    int r = 0, m = 1, p;
    while(n != 0){
        p = n % b;
        r = r + p * m;
        n = n / b;
        m *= 10;
    }
    return r;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = DecToAny(n, b);
  cout << res << endl;
}