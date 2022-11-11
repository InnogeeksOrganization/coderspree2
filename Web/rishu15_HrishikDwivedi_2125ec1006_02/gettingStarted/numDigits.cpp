#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    int temp = n;
    int d=0;
    while(temp!=0){
       int r=temp%10;
        d++;
        temp/=10;
    }
    cout<<d<<endl;
}