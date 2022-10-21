#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
  //write your code here

    int i=0,j=1,dig;
    
    while (n>0){
        dig = n % 10;
        n = n / 10;
        i += j * pow(10, dig - 1);
        j++;
    }

    cout << (i) << endl;
}