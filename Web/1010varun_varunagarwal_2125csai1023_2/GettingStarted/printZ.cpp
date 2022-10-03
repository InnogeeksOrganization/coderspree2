#include <iostream>
using namespace std;
int main() {
    for(int i = 0; i < 5; i++)cout << "*";
    cout << endl;
    int i = 3;
    while(i > 0){
        for(int j = 0; j < i; j++)cout << " ";
        cout << "*" << endl;
        i--;
    }
    for(int i = 0; i < 5; i++)cout << "*";

}

