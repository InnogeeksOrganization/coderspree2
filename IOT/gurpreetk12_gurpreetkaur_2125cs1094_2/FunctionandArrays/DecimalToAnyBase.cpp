#include<iostream>
#include<math.h>
using namespace std;
int DecToAny(int n, int b) {
    int arr[100],i=0,f=0,final;
    while(n!=0)
    {
        int q=n%b;
        arr[i]=q;
        i++;
        n=n/b;
    }
    for(int j=i-1;j>=0;j--)
    {
       int g=pow(10,j);
       int final=arr[j]*g;
       f=f+final;
    }
    return f;
    
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = DecToAny(n, b);
  cout << res << endl;
}