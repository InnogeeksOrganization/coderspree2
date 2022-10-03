#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    for (int i = n1; i <= n2; i++)
    {
        int t = 0;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                t = 1;
                break;
            }
        }
        if (t == 0)
        {
            cout << i << "\n";
        }
    }
    return 0;
}