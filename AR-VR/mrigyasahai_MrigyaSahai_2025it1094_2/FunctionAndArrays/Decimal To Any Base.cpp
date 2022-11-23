#include<iostream>
#include<cmath>
using namespace std;
int DecToAny(int n, int b) {
    int r, d=0,s=0;
    int a1, a2;
    //a1 = n;
    //cout<<a1<<endl;
    while(n!=0)
    {
        a1=n;
        n = n/b;
        r=(a1-(n*b))*(pow(10,d));
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
  int res = DecToAny(n, b);
  cout << res << endl;
}
