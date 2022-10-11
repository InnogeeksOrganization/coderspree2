#include <iostream>
using namespace std;
#define ll long long
int main(int argc, char **argv){
    ll low, high;
    cin >> low >> high;
    for(ll i = low; i <= high; i++){
        ll prime = 0;
        for(ll j = 1; j <= i/2; j++)if(i%j == 0)prime ++;
        if(prime == 1)cout << i << endl;
    }
}