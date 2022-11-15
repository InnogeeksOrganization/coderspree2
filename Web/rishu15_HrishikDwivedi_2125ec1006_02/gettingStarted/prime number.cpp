#include <iostream>
using namespace std;
int main(int argc, char** argv) {
  int t;
  cin >> t;

  //write your code here

  for(int j=1;j<=t;j++) {
    int n;
    int count = 0;
    cin >> n;
    if (n == 0 || n == 1)
      count = 1;
    for (int i = 2; i <= n/2; i++) {
      if ((n % i) == 0) {
        count++;
        break;
      }
    }
    if (count == 0) {
      cout << "prime" << endl;
    }
    else {
      cout << "not prime" << endl;
    }
  }

}