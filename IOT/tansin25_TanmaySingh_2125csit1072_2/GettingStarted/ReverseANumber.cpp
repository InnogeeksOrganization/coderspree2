#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,c;
    cin >> n;
  while(n!=0){
    c=n%10;
    cout<<c<<endl;
    n=n/10;
  }
 return 0;  
}