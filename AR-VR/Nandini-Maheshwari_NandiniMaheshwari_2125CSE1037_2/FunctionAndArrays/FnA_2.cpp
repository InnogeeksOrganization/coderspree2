#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int DecToAny(int n, int b) {
    //write your code here
    int r, num, c = 0;
    while(n!=0){
        r = n%b;
        num = num + r*(pow(10,c));
        n = n/b;
        c++;
    }
    return num;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = DecToAny(n, b);
  cout << res << endl;
}