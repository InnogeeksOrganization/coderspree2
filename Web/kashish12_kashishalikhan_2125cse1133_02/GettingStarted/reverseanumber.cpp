#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int p;
    while(n != 0){
        p = n % 10;
        cout<<p<<"\n";
        n = n / 10;
    }

    //write your code here
    return 0;
}