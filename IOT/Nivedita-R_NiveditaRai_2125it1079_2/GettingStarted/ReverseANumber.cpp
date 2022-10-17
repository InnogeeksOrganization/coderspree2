#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int d;
    while(n != 0)
    {
        d = n % 10;
        cout << d << endl;
        n = n / 10;
    }
  return 0;  
    
}