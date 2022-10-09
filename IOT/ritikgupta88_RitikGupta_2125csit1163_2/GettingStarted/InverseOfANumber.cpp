#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
    int n,i=1,c,sum=0;
    cin >> n;
    while(n!=0){
         c=n%10;
       
        sum = sum + i*pow(10,c-1) ;
        n=n/10;
        i++;
    }
    cout<<sum;
    
}