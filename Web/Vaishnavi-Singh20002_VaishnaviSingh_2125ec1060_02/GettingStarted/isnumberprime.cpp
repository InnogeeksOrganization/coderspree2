#include <iostream>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    for(int i=1;i<=t;i++){
        cin>>n;
       int count = 0;
        for(int j = 2; j*j <= n; j++){
            if(n % j == 0){
                count++;
            }
        }
        if(count == 0){
            cout<<"prime\n";
        }
        else{
            cout<<"not prime\n";
        }
    }
    return 0;
}