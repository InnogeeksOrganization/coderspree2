#include <iostream>
using namespace std;
void printn(int n){
    if(n == 0){
        return;
    }
    printn(n/10);
    cout << n%10 <<endl;
}
int main(int argc, char **argv){
    int n;
    cin >> n;
    printn(n);
    
}