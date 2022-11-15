#include <iostream>

using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int i;
    while(n>0){
        i=n%10;
        cout<<i<<"\n";
        n=n/10;
    }
    //donee
    
}