#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int p,r = 0,q;
    while(n != 0){
        p = n % 10;
        r = r * 10 + p;
        n = n / 10;
    }
    while(r != 0){
        q = r % 10;
        r = r / 10;
        cout<<q<<endl;
    }
    return 0;
}