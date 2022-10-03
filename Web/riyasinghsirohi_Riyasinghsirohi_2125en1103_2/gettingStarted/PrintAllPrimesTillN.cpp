#include <iostream>
#include<math.h>
using namespace std;
int main(int argc, char** argv) {
  long low, high;
  cin >> low >> high;
  for (long j = low; j <= high; j++)
  {
      if(j==0 || j==1)
      {
          continue;
      }
      int count=1;
    for (long i = 2; i <=sqrt(j); i++)
    {
     
      if (j % i == 0)
      {
        count = 0;
        break;
      }
      
    }
    if (count==1)
      {
        cout << j << endl;
      }

  }
}