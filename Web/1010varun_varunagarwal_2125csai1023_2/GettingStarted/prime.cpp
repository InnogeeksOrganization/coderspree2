#include <iostream>
using namespace std;
#define ll long long
int main(int argc, char **argv){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        int prime = 0;
        for(ll i = 1; i <= n/2; i++)if(n%i == 0)prime ++;
        if(prime == 1)cout << "prime" << endl;
        else cout << "not prime" << endl;
    }
    
}