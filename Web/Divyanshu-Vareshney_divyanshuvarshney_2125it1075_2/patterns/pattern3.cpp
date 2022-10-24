#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    int i,j,k;
    for(i=1;i<=n;i++){
        for(j=i+1;j<=n;j++){
            cout<<"\t";
        }
        for(k=1;k<=i;k++){
            cout<<"*"<<"\t";
        }
        cout<<"\n";
        
    }
    
}