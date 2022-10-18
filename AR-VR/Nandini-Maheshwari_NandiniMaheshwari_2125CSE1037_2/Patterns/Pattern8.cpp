#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here
    
    for(int i = 0; i<n; i++){
        for(int j = n-i-1; j>0; j--){
            cout << "\t";
        }
        cout << "*" << endl;
    }
    
}