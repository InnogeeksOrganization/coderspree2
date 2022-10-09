#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n,k,r,temp1,len,m1,m2;
    cin>>n;
    cin>>k;
    temp1 = n;
    
    while(n!=0){
        len++;
        n = n/10;
    }

    if(k>0){
        m1 = pow(10,k);
        m2 = pow(10,len-k);
        r = temp1 % m1;
        r = r*m2;
        temp1 = temp1/m1;
        r = r+temp1;
    }
    else if(k<0){
        k = -k;
        m1 = pow(10,k);
        m2 = pow(10,len-k);
        r = temp1 % m2;
        r = r *m1;
        temp1 = temp1/m2;
        r = r+temp1;
    }
    
    cout<<r;
    return 0;
}
