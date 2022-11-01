#include<iostream>
using namespace std;
int digFreq(int n, int d) {
  //write your code here
  int c = 0, r;
  while(n != 0){
      r = n%10;
      if(r == d){
          c++;
      }
      n = n/10;
  }
  return c;
}
int main() {
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}