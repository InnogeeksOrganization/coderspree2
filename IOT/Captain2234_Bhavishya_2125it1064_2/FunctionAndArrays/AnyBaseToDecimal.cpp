#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int AnyToDec(int n, int b) {
    int c=0,add=0;
while(n!=0){
    int rem=n%10;
     add=add+rem*pow(b,c);
    c++;
    n=n/10;
}
return add;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}