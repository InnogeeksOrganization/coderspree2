#include <iostream>
using namespace std;
#define ll long long
int main(int argc, char **argv){
    ll n, factor = 2;
    cin >> n;
    while(n > 1){
        if(n%factor == 0){
            n /= factor;
            cout << factor << " ";
        }
        else{
            factor ++ ;
        }
    }
}
