#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    long int num;
    cin>>num;
    long int cpy=num;
    for(long int i=1;i<=num;i++){
        long int flag=0;
        for(long int j=1;j<=i;j++){ if(i%j==0)flag++;/*flag to check primes upto num*/}
        if(flag==2){
            while(cpy%i==0){cout<<i<<" ";/*factors printed*/
            cpy=cpy/i;}}}
    return 0;}
