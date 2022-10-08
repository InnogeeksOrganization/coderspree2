#include<iostream>
using namespace std;
int gcd(int m, int n) {
   int r = 0, a, b;
   a = (m > n) ? m : n;
   b = (m < n) ? m : n;
   r = b;
   while (a % b != 0) {
      r = a % b;
      a = b;
      b = r;
   }
   return r;
}
int lcm(int m, int n) {
   int a;
   a = (m > n) ? m: n;
   while (true) {
      if (a % m == 0 && a % n == 0)
         return a;
         ++a;
   }
}
int main() {
   
   int m, n;
   cin >> m >> n;
   cout << gcd(m, n) << endl;
   cout << lcm(m, n) << endl;
   return 0;
}