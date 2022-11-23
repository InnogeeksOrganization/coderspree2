#include<iostream>
#include<cmath>
using namespace std;
int AnyToDec(int n, int b) {
    int r, d=0,s=0;
    int a1;
    //a1 = n;
    //cout<<a1<<endl;
    while(n!=0)
    {
        a1=n;
        n = n/10;
        r=(a1-(n*10))*(pow(b,d));
        d++;
        s=s+r;
    }
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
