#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<n;j++){
            cout<<"\t";
        }
        for(int j = 1;j <= i; j++){
            cout<<"*\t";
        }
        cout<<endl;
    }
    
    //write your code here
    
}