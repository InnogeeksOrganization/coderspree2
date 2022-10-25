#include<iostream>
using namespace std;
# define ll long long
int digFreq(int n, int d) {
  //write your code here
  ll temp = n;
  int freq=0;
  int digit=0;
  while(n>0){
      digit++;
      n/=10;
  }
  n=temp;
  for(int i=1;i<=digit;i++){
      ll r=temp%10;
      if(r==d){
          freq++;
      }
      temp/=10;
  }
  return freq;
}
int main() {
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}