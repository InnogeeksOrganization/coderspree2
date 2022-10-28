#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int AnyToDec(int n, int b) {
int num=0,c=0;
while(n>0)
{
   num=num+pow(b,c)*(n%10);
   c++;
   n/=10;
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