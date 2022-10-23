#include <iostream>
using namespace std;

int main()
{
    int n1, n2, i;
    int gcd = 1, lcm = 1;  


    cin >> n1 >> n2;
    for ( i = 1; i < 1000; i++)
    {   if ((n1 % i == 0) && (n2 % i == 0))
        {
            gcd = i; 
        }
    }

    lcm = (n1 * n2) / gcd;
    cout << gcd << endl << lcm <<endl;

    return 0;
}