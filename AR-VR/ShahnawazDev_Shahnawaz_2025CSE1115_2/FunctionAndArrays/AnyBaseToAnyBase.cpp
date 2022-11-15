#include<iostream>
#include<cmath>
using namespace std;
int AnyToDec(int n, int b) {
    int p=0,num=0;
    while(n)
    {
        num= num+(n%10)*pow(b,p);
        n/=10;
        p++;
    }
    return num;
}
int DecToAny(int n, int b) {
    int p=1,num=0;
    while(n)
    {
        num=num+ p*(n%b);
        n/=b;
        p*=10;
    }
    return num;
}
static int AnyToAny(int n, int b1, int b2) {
  return DecToAny(AnyToDec(n,b1),b2);
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