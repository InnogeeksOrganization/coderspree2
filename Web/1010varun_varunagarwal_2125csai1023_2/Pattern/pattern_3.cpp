#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n, j, k;
    cin >> n;
    for(int i = n; i > 0; i--){
        for(j = 1; j <= i-1; j++){
            cout << "     ";
        }
        for(k = 0; k <= n-j; k++){
            cout << "*" << "    ";
        }
        cout << endl;
    }
}