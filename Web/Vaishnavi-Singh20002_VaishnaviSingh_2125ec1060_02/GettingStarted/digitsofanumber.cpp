#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int num=0;
    int p=n;
    while(p!=0){
        p=p/10;
        num=num+1;
        
    }
    int div = pow(10,num-1);
    while(div!=0){
        int q =n/div;
        int r=n%div;
        cout<<q<<endl;
        n=r;
        div=div/10;
    }

    //write your code here
    
}
