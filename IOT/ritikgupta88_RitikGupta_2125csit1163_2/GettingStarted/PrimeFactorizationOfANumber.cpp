#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int n;
    cin >> n;
    int i=2;
    while(n!=1){
        if(n%i==0){
        cout<<i<<" ";
        n=n/i;
    }
        if(n%i!=0){
            i++;
        }
    }
}