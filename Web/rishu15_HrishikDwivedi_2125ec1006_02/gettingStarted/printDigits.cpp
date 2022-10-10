#include <iostream>
using namespace std;
# define ll long long
int main(int argc, char **argv){
    ll n;
    cin >> n;

    //write your code here
  
    ll temp = n;
    int d=0;
    ll sum=0;
    while(temp!=0){
       ll r=temp%10;
        temp/=10;
        sum=sum*10 + r;
    }
    while(sum!=0){
        ll r=sum%10;
        cout<<r<<endl;
        sum/=10;
    }
}
