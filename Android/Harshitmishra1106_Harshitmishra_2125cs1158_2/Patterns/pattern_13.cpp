#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++ )
    {
      int x = 1;
      for (int j = 0; j <= i; j++)  {
        cout<<x<<"\t";
        int x1 = (x * (i - j)) / (j + 1);
        x = x1;

      }
      cout<<endl;
    }
    return 0;
    //write your code here
    
}
