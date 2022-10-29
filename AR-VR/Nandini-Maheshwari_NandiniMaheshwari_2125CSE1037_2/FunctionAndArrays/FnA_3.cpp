#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int AnyToDec(int n, int b) {
    //write your code here.
    int r, num, c = 0, x;
    while(n!=0){
        r = n%10;
        x = r*pow(b,c);
        num = num + x;
        n = n/10;
        c = c+1;
    }
    return num;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}