#include <bits/stdc++.h>
using namespace std;

void primeInRange(int low, int high)
{
    int flag;


    for (int i = low; i <=high; i++) {

        if (i == 1 || i == 0)
            continue;

        flag = 1;


        for (int j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }


        if (flag == 1)
            cout << i << endl;
    }
}


int main()
{

    int low,high;
    cin>>low>>high;

    primeInRange(low, high);

    return 0;
}
