#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int c = 0;
    while(n){
        c++;
        n/=10;
    }
    cout << c;   
}