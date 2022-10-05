#include <iostream>
using namespace std;
#define ll long long

int main(int argc, char **argv){
    ll n, rev = 0, count;
    cin >> n;
    if(n%10 == 0)count = 0;
    while(n > 0){
        rev = rev*10 + n%10;
        n /= 10;
    }
    while(rev > 0){
        cout << rev%10 << endl;
        rev /= 10;
    }
    if(count == 0)cout << count << endl;
    
}
