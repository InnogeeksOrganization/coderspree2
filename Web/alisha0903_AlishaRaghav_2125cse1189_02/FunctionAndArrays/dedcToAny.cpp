#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int DecToAny(int n, int b) {
int num=0,c=0;
while(n>0)
{
    num=num + (n%b)*pow(10,c);
    c++;
    n/=b;
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