#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int n;
    cin >> n;
    int s1 = n / 2;     
    int s2 = -1;        

    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= s1; j++)   
      {
            cout << "\t";
      }
      cout << "*\t";

      for (int j = 1; j <= s2; j++)
      {
        cout << "\t";
      }
    if ( i > 1 && i < n) 
      {
        cout << "*\t";
      }

      if (i <= n / 2)
      {
        s1--;
        s2 = s2 + 2;
      }
      else
      {
        s1++;
        s2 = s2 - 2;
      }
    cout<<"\n";
    }
  }

  

  