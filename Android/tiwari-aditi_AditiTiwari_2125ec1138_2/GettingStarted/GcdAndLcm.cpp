#include <iostream>
using namespace std;
int main(){
    int num1,num2,og1,og2,a,b;
    cin >> num1 >> num2;
    og1 = num1;
    og2 = num2;
    while(num1!=0 || num2!=0) {
        int rem = num1%num2;
        if(rem==0)
            break;
        else{
            num2 = num1;
            num1 = rem; }
    }
    a = num1;

    b = og1*og2/a;
    cout<<a<<endl<<b;
    
}