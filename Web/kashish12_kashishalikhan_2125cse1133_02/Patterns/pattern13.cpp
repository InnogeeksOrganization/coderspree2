#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++ )
    {
      int a = 1;
      for (int j = 0; j <= i; j++)  {
        cout<<a<<"	";
        int b = (a * (i - j)) / (j + 1);
        a = b;

      }
      cout<<endl;
    }
  }