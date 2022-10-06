#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;
    int low,k=0;
    if(num1>num2)
    low=num2;
    else
    low=num1;
    int gcd[low/2];
    for(int i=1;i<=low;i++){
    if(num1%i==0 && num2%i==0){
     gcd[k]=i;
     k++;
    }
    }
cout<<gcd[k-1]<<endl<<((num1*num2)/gcd[k-1]);
}