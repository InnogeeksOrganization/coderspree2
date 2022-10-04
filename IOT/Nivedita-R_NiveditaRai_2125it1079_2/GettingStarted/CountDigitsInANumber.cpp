#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n>=1 && n<=pow(10.0,9.0)){
    int d=0;
    while(n!=0)
    {
        n=n/10;
        d++;
    }
    cout<<d;
    }
    return 0;
}