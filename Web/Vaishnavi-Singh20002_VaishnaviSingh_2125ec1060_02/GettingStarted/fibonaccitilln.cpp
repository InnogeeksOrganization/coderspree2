#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a=0,b=1;
    cout<<a<<"\n";
    cout<<b<<"\n";
    int c = 0;
    for(int i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<c<<" \n";
    }
    return 0;
    
    
    
}