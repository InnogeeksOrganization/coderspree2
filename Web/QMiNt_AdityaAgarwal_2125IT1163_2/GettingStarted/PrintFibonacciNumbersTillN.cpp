#include <iostream>
using namespace std;
int main()
{
    int k;
    cin >> k;
    int n=0,m=1;
    int t=n;
    for(int i=0;k>i;i++)
    {
        t=n;
        cout<<n<<endl;
        n=n+m;
        m=t;
    }
    return 0;
}