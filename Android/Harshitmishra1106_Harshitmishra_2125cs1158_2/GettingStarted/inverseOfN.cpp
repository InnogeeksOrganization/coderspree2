#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,num=0,face=1;
    cin>>n;
    while(n>0){
        int a=n%10;
        num = num+(face*pow(10,a-1));
        n=n/10;
        face++;
    }
    cout<<num;
    return 0;
}