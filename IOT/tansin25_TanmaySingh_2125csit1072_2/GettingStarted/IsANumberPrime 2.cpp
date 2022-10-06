#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t,n;
    cin >> t;
    for (int i = 0; i < t; i++){
    cin >> n;
    int c = 2;
    while (c*c <= n){
    if (n%c == 0)
    break;
    c++;
    }
    if (c * c > n){
    cout << "prime" << endl;
    }
    else{
    cout << "not prime" << endl;
    }
    }
}