#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;

    //write your code here
    for(int i=1;i<=t;i++){
        int n;
        int c=0;
        cin>>n;
        for(int j=1;j<=n;j++){
            if(n%j==0){
                c++;
            }
        }
        if(c==2){
            cout<<"prime"<<"\n";
        }
        else{
            cout<<"not prime"<<"\n";
        }
    }
    
}