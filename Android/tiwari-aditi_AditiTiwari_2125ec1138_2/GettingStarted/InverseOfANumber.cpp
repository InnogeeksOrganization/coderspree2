#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int start=1,n,dig,i =0,mult;
    cin>>n;
    
    while(n!=0){
        dig = n%10;
        dig--;
        mult = pow(10,dig);
        i+= start*mult;
        n= n/10;
        start++;
    }
    
    cout<<i;
    return 0;
 }