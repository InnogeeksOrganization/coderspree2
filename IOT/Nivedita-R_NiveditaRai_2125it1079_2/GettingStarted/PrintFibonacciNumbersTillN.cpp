#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n,c;
    cin >> n;
    int a=0,b=1;
    cout<<a<<endl<<b<<endl;
    for(int i=0;i<n-2;i++)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
    
    
}