#include<iostream>
#include<math.h>
using namespace std;
int AnyToDec(int n, int b) {
    int g=n;
    int p=0,i=0,sum=0;
    int q=g;
    while(g!=0)
    {
        q=g%10;
        p=pow(b,i);
        
        i++;
        g=g/10;
        sum=sum+(p*q);
    }
    return(sum);
    
}
int main() {
  int n;
  int b;
  int sum=0,h=0,g=0,i=0;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}