#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    
    for(int i = n; i>0; i--){
        for(int j = i-1; j>0; j--){
            cout << "\t";
        }
        for(int k = n-i+1; k>0; k--){
            cout << "*\t";
        }
        cout << "\n";
    }
}