#include <iostream>
#include <math.h>
using namespace std;

int main(){
   int n, r, num = 0, c = 0, a;
    cin>>n;
    a = n;
    while(a > 0)
    {
        r = a % 10;
        c++;
        num += pow(10, r - 1) * c;
        a /= 10;
    }
    cout<<num<<endl;
   return 0; 
    
}