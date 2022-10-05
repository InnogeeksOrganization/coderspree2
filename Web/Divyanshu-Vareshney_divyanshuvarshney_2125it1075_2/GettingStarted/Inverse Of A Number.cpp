#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv){
int n;
cin>>n;
int power=1,digit,inverted;
while(n>0){
    digit=n%10;
    inverted=inverted+power*pow(10,(digit-1));
    n=n/10;
    power++;
}
cout<<inverted;
//DONE
    
}