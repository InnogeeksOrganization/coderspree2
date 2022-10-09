#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int p,count = 0;
    while(n != 0){
        p = n % 10;
        count ++;
        n = n / 10;
    }
    cout<<count;
    return 0;
    
    //write your code here
    
}