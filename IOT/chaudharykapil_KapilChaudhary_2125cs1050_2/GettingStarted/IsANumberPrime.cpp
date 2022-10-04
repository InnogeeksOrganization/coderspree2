#include <iostream>
using namespace std;
bool IsPrime(int n){
    int c = 0;
    for(int i = 2;i<n;i++){
        if(n%i == 0){
            c++;
        }
    }
    return c==0;
}
int main(int argc, char **argv){
    int t;
    cin >> t;
    for(int _ = 0;_<t;_++){
        int n;
        cin >> n;
        if(IsPrime(n))
            cout << "prime\n";
        else
            cout << "not prime\n";
    }
    
}