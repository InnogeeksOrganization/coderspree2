#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,count=0;
    cin >> n;
    
    while(n){
        count++;
        n=n/10;
        
    }
    cout<<count;
    
}