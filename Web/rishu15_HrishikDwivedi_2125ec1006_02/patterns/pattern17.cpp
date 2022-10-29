#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;

    int stars = 1;
    int spaces = n / 2;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= spaces; j++){
            if (i == n / 2 + 1){
                cout << ("*	");
            }
            else{
                cout << ("	");
            }
        }
        for (int j = 1; j <= stars; j++){
            cout << ("*	");
        }

        cout << endl;
        
        if (i <= n / 2){
            stars++;
        }
        else{
            stars--;
        }
    }
}