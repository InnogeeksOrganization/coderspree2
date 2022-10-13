#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int n,k,i=1,t;
    cin>>n>>k;
    int digits = 0;
    t=n;
    while(t != 0){
       t = t/10;
        digits++;
    }
    int c[digits];
    if(k>0){
     if(k>digits){
        k=k%digits;
        }
    while(i<=k){
        c[i] = n%10;
        n=n/10;
        i++;
    }
   while(i>1){
        cout<<c[i-1];
        i--;
    }
    if(n>0)
    cout<<n;
    }
   else if(k<0){
         k=-k;
        if(k>digits){
        k=k%digits;
        }
    while(i<=(digits-k)){
        c[i] = n%10;
        n=n/10;
        i++;
    }
   while(i>1){
        cout<<c[i-1];
        i--;
    }
    if(n>0)
    cout<<n;
 }
 else
 cout<<n;
}