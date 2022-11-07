#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    
    int c = 0;
    while(n!=0){
        c++;
        n = n/10;
    }
    cout << c << endl;
}