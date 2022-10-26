#include<iostream>
#include<math.h>
using namespace std;
int DecToAny(int n, int b) {
    int res = 0,c = 0;
    while(n!=0){
        int rem = n%b;
        res = res+ rem*pow(10,c);
        c++;
        n=n/b;
    }
    return res;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = DecToAny(n, b);
  cout << res << endl;
}