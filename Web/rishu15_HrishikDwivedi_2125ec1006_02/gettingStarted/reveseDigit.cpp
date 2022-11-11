#include <iostream>
using namespace std;
# define ll long long
int main(int argc, char **argv){
    ll n;
    cin >> n;

    //write your code here
    ll temp = n;
    while(temp>0){
        ll r = temp%10;
        cout<<r<<endl;
        temp/=10;
    }
}