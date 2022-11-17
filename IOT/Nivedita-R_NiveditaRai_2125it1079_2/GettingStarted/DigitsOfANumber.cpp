#include <iostream>
#include<cmath>
using namespace std;

int main(int argc, char **argv){
    int n,c=0;
    cin >> n;
    int m,i,j;
    m=n;
    while(n != 0)
    {
        c++;
        n = n / 10;
    }
    c = c - 1;
    i = pow (10.0,c);
    while(i!=0)
    {
        cout << m/i << endl;
        m = m % i;
        i = i / 10;
        
    }
    
}
