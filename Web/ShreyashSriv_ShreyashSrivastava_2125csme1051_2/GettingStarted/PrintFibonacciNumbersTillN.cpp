#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int a=0,b=1,c;
    n-=2;
    cout<<a<<endl;
    cout<<b<<endl;
    while(n--){
        c=a+b;
        a=b;
        b=c;
        cout<<c<<endl;
        
    }
    return 0;
    
}