#include <iostream>

using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
//Write your code here

    while (n != 0){
        int digit = n % 10;
        n = n / 10;
        cout << digit << endl;
    }
}
