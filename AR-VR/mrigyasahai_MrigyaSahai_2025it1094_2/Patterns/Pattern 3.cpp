#include <iostream>
using namespace std;


int main(int argc, char **argv){
    int n;
    cin >> n;
    
    int i, j;
    for(i=n-1;i>=0;i--){
        for(j=0;j<n;j++){
            if(j>=i){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<endl;
    }
    
}
