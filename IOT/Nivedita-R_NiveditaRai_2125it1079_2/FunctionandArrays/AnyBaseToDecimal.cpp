#include<iostream>
#include<cmath>
using namespace std;
int AnyToDec(int n, int b) {
int d,r,s=0,i=0,t;
while(n!=0){
t=pow(b,i);
r=n%10;
s=s+(r*t);
i++;
n=n/10;}
return s;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}