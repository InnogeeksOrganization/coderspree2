#include <iostream>
using namespace std;
int main(int argc, char** argv) {
  int n;
  cin >> n;
  int outer = n / 2; //outer space
  int inner = -1; //same as 0; not to print anything
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= outer; j++) { /*print outer spaces*/
      cout << "\t";
    }
    cout << "*\t"; //print star
    for (int j = 1; j <= inner; j++)//print inner space
    {
      cout << "\t";
    }
    if ( i > 1 && i < n) { /*if the current row is neither first or last*/
      cout << "*"; 
    }
    if (i <= n / 2) {
      outer--;
      inner = inner + 2;
    }
    else {
      outer++;
      inner = inner - 2;
    }
    cout << endl;
  }
  return 0;
}