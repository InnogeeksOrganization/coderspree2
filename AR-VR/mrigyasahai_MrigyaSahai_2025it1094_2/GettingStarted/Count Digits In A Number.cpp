#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    int rem, digit; 
    
    while(n!=0){
        rem = n % 10;
        digit++;
        n = n / 10;
    }
    cout << digit;
    return 0;
}
