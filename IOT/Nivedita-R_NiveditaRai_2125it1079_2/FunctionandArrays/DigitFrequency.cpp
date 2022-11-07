#include<iostream>
#include<cmath>
using namespace std;
int digFreq(int n,int d)
{
    int r, c = 0;
    while(n != 0)
    {
        r = n % 10;
        if(r == d)
            c++;
        n=n/10;
    }
    return c;
}
int main() {
  int n, d;
  cin >> n >> d;
  long int r;
  r=pow(10.0,9.0);
  if(n >= 0 && n <= r && d >= 0 && d <= 9)
  {
  int res = digFreq(n, d);
  cout << res << endl;
}
}