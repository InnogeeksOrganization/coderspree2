#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    int c, a = 0, b = 1;
    if(n == 1)cout << a << endl;
    else {
        cout << a << endl << b << endl;
        n-= 2;
        while(n--){
            c = a+b;
            a = b;
            b = c;
            cout << c << endl;
        }
    }
    
    
}