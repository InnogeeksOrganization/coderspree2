#include<iostream>
#include<math.h>
using namespace std;
int AnyToDec(int n, int b) {
    int sum =0,i=0;
    while(n!=0){
        sum =sum + (n%10)*pow(b,i);
        n=n/10;
        i++;
        
    }
    return sum;
//write your code here.
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = AnyToDec(n, b);
  cout << res << endl;
}