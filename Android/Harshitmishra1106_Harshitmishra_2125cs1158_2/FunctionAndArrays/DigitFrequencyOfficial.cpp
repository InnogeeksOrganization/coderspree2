#include<iostream>
using namespace std;
int digFreq(int n, int d) {
  int a,b,freq=0;
  while(n>0){
      a=n%10;
      n=n/10;
      if(a==d)
      freq++;
  }
  return freq;
}
int main() {
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
  return 0;
}