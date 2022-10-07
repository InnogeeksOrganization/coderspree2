#include <iostream>
#include<cmath>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    
    int digits=(int)log10(n)+1;
    k%=digits;
    while(k>0)
    {
        int t;
        t = n % 10;
        n /= 10;
        n += (pow(10,digits-1)*t);
        k--;
    }
    while(k<0)
    {
        int t;
        int p = pow(10,digits-1);
        t = n / p;
        n %= p;
        n = n * 10 + t;
        k++;
    }
    cout<<n;
    return 0;
}
