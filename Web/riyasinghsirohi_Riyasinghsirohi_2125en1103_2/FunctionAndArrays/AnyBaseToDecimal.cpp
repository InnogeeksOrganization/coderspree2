#include<iostream>
#include<math.h>
using namespace std;
int AnyToDec(int n, int b) {
    int rem,p,i=0,ans=0;
while(n>0)
{
    rem=n%10;
    n=n/10;
    p=rem*pow(b,i);
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
  int res = AnyToDec(n, b);
  cout << res << endl;
}