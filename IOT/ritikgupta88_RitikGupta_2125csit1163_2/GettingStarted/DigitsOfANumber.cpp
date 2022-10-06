#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char **argv){
   long long int n,r,rev=0,d,t;
    cin >> n;
    t=n;
    
    while(n!=0){
        r=n%10;
        rev=rev*10 + r;
        n=n/10;
 }

    while(rev!=0){
        d=rev%10;
        cout<<d<<endl;
        rev=rev/10;
    }
     while(t%10==0){
         cout<<"0"<<endl;
         t=t/10;
 
 }
}