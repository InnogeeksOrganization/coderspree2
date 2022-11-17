#include<iostream>
#include<cmath>
using namespace std;
int AnyToAny(int n, int b1, int b2) {
   int r, d=0,s=0;
    int a1;
    //a1 = n;
    //cout<<a1<<endl;
    while(n!=0)
    {
        a1=n;
        n = n/b1;
        r=(a1-(n*b1))*(pow(b2,d));
        d++;
        s=s+r;
    }
    return s;
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
