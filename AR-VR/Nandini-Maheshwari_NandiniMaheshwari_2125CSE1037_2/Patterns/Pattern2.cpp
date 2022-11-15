#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    //write your code here
    
    for(int i = n; i>0; i--){
        for(int j = i; j>0; j--){
            cout << "*\t"; 
        }
        cout << "\n";
    }
    return 0;
}