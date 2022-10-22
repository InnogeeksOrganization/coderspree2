#include<iostream>
using namespace std;
int digFreq(int n, int d) {
    int arr[100],i=0,c=0;
    while(n!=0)
    {
        arr[i]=n%10;
        n=n/10;
        i++;
    }
    for(int j=0;j<i;j++)
    {
        if(arr[j]==d)
        c++;
    }
    return c;
}
int main() {
  int n, d;
  cin >> n >> d;
  int res = digFreq(n, d);
  cout << res << endl;
}