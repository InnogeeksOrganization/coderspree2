#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    //write your code here
    int i,j;
        for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(n-i+1==j){
                cout<<"*"<<"\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<"\n";
    }
    
}