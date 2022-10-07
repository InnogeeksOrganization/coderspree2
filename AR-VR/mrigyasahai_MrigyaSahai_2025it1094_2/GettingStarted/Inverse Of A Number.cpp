#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    int flag = 0, dig = 1, r;
    cin >> n;

   while(n>0){
       r = n % 10;
       flag =  flag + dig*pow(10,r-1);
       dig++;
       n = n / 10;
   }
   cout<<flag<<endl;
   return 0;
    
}
