#include <iostream>
using namespace std;

int main(int argc, char **argv){
    long long int n;
    cin >> n;

    //write your code here

    long long int m, rev = 0;
    int r;
    m = n;
    while(m!=0){
        r = m%10;
        rev = rev*10 + r;
        m = m/10;
    }
    while(rev!=0){
        cout << rev%10 << endl;
        rev = rev/10;
    }
    if(n%10 == 0){
        cout << "0" << endl;
    }
}
