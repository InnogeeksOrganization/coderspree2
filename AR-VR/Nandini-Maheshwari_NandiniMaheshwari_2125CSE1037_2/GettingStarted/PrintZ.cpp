#include<iostream>
using namespace std;
int main() {
    // print z using 5 '*'
    for(int i = 0; i<5; i++){
        cout << "*";
    }
    cout << "\n";
    for(int i = 3; i>0; i--){
        for(int j = i; j>0; j--){
            cout << " ";
        }
        cout << "*\n";
    }
    for(int i = 0; i<5; i++){
        cout << "*";
    }
    cout << endl;
}