#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    //write your code here
    for(int i=n;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<"*";
            cout<<"\t";
        }
        cout<<"\n";
    }

}