#include<iostream>
#include<math.h>
using namespace std;
int DecToAny(int n, int b) {
int rem,quo=n,i=0,ans=0,p;
while(quo>0)
{
    rem=quo%b;
    quo=quo/b;
    p=rem*pow(10,i);
    ans=ans+p;
    i++;
}
return ans;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = DecToAny(n, b);
  cout << res << endl;
}