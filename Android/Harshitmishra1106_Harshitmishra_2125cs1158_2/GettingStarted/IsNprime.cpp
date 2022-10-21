#include <iostream>
#include <iomanip>
using namespace std;
int main() {
  int t, i, j, c;
  long int n[10000];
  cin >> t;
  for (i = 0; i < t; i++) {
    cin >> n[i];
  }
  for (i = 0; i < t; i++) {
    if (n[i] >= 2 && n[i] < 1000000000) {
      c = 0;
      for (j = 1; j <= n[i]; j++) {
        if (n[i] % j == 0)
          c++;
      }
      if (c == 2)
        cout << "prime\n";
      else
        cout << "not prime\n";
    }
    else
      continue;

  }
  return 0;

}