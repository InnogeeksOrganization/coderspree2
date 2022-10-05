#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    int i,j,digit=0;
    while(n>0){
        i=n%10;
        digit=digit*10+i;
        n=n/10;
    }
    while(digit>0){
        j=digit%10;
        cout<<j<<"\n";
        digit=digit/10;
    }
    //DONE
}
