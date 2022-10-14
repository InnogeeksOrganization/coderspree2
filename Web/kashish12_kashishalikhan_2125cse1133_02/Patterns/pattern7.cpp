#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    //write your code here
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(i == j){
                cout<<"*\t";
                break;
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }
}