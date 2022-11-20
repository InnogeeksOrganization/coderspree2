#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,a;
    cin >> n;
    while(n!=0)
    {
        a=n%10;
        cout<<a<<endl;
        n=n/10;
    }
    
}