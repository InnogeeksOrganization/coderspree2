#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    //write your code here
    
    int f[n] = {0};
    f[0] = 0;
    f[1] = 1;
    cout << f[0] << endl << f[1] << endl;
    for(int i = 2; i<n; i++){
        f[i] = f[i-1] + f[i-2];
        cout << f[i] << endl;
    }
    
}