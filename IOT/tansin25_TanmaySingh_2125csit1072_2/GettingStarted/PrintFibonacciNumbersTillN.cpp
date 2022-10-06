#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n,a=0,b=1,c;
    cin >> n;
    for(int i=0;i<n;i++){
    cout<<a<<endl;
    c=a+b;
    a=b;
    b=c;
    }
    return 0;
}