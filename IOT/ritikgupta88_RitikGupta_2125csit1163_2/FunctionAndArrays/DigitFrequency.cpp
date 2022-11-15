#include<iostream>
using namespace std;
int digFreq(int n, int d) {
    int p,k=0;
    while(n!=0){
    p=n%10;
    if(p==d)
    k++;
    n=n/10;
    }
    return k;
  //write your code here
}
int main() {
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}