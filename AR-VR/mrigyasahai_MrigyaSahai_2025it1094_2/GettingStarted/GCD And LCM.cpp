#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int n1, n2;
    cin >> n1 >> n2;
    int gcd, lcm;

    if ( n2 > n1) {   
    int temp = n2;
    n2 = n1;
    n1 = temp;
  }
    
  for (int i = 1; i <=  n2; ++i) {
    if (n1 % i == 0 && n2 % i ==0) {
      gcd = i;
    }
  }
  lcm = (n1*n2)/gcd;
  
  cout<<gcd<<endl;
  cout<<lcm<<endl;
  
  return 0;
}
