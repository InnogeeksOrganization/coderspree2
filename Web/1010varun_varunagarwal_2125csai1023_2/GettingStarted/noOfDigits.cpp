#include <iostream>
using namespace std;
#define ll long long

int main(int argc, char **argv){
    ll n, total = 0;
    cin >> n;
    while(n > 0){
        total ++;
        n /= 10;
    }
    cout << total;    
}