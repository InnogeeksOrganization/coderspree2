#include<iostream>
#include<cmath>
using namespace std;
 int AnyToAny(int n, int b1, int b2) {
  int d,r,s=0,i=0,i1=0,s1=0,t;
while(n!=0)
{
t=pow(b1,i);
r=n%10;
s=s+(r*t);
i++;
n=n/10;
    
}
 while(s!= 0)
    {
        d = s % b2;
        s1 = s1 + d * pow(10.0,i1);
        s = s / b2;
        i1++;
    }
return s1;


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