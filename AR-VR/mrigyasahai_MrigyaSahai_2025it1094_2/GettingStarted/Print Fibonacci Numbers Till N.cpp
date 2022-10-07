#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int fo=0, f1=1, f2;
    int i, j, temp;
    
    cout << fo << endl;
    cout << f1 << endl;
    for(i = 2; i < n; i++)
    {
        f2 = fo + f1;
        cout << f2 << endl;
        temp = fo;
        fo = f1;
        f1 = f2;
        
    }
    return 0;
}
