#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin >> n;
    int a=n;
    while(n){
        count++;
        n=n/10;
        
    }
    count--;
    do{
        int b,c;
        b=pow(10,count);
        c=a/b;
        cout<<c<<endl;
        
        a=a%b;
    }while(count--);
    return 0;

    
}