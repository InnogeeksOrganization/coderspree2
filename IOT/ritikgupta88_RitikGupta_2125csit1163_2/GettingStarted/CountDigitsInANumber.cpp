#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,k;
    cin >> n;
    while(n!=0){
        n=n/10;
        k++;
    }
    cout<<k;
    
}
