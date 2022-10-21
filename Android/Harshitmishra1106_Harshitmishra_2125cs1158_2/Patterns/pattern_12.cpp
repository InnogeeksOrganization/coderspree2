#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int n,a=0,b=1,c;//as we have to print fibo in pattern format
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i==1&&j==1)cout<<a;
            else if(i==2&&j==1)cout<<b<<"\t";
            else{
                c=a+b;a=b;
                b=c;cout<<c<<"\t";
            }
        }cout<<"\n";}
    return 0;
    //write your code here
    }