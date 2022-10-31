#include<iostream>
using namespace std;
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
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = DecToAny(n, b);
  cout << res << endl;
}