#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here

    int temp = n;
    int d=0;
    int sum=0;
    while(temp!=0){
        int r=temp%10;
        temp/=10;
        sum=sum*10 + r;
    }
    while(sum!=0){
        int r=sum%10;
        cout<<r<<endl;
        sum/=10;
    }
}
