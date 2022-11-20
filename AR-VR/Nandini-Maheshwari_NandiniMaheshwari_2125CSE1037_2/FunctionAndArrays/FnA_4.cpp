#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int AnyToAny(int n, int b1, int b2) {
  //write your code here
  int r, num, c = 0, x, num1;
    while(n!=0){
        r = n%10;
        x = r*pow(b1,c);
        num = num + x;
        n = n/10;
        c++;
    }
    c = 0;
    while(num!=0){
        r = num%b2;
        num1 = num1 + r*(pow(10,c));
        num = num/b2;
        c++;
    }
    return num1;
}
int main() {
  int n;
  int b1;
  int b2;
  cin >> n;
  cin >> b1;
  cin >> b2;
  int res = AnyToAny(n, b1, b2);
  cout << res << endl;
}