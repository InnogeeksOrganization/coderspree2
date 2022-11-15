#include<iostream>
using namespace std;
int digFreq(int n, int d) {
  int f=0;
  while(n)
  {
    if(d==(n%10))
        f++;
    n/=10;
  }
  return f;
}
int main() {
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}