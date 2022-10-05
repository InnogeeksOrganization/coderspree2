#include <bits/stdc++.h>
using namespace std;
void prime(int n){
    while(n%2==0){
        cout<<2<<" ";
        n/=2;
    }
    int x=sqrt(n);
    for(int i=3;i<=x;i=i+2){
        while(n%i==0) {
            cout<<i<<" ";
            n/=i;
        }
    }
    if (n>2) cout<<n<<" ";
}
int main(int argc, char **argv){
    int n;
    cin >> n;
    prime(n);
    return 0;

    //write your code here

}
