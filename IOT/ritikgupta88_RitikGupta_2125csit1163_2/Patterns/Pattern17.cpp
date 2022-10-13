#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<n/2){
            if(j<=n/2+i&&j>=n/2)
            cout<<"*\t";
            else
            cout<<"\t";
            }
            if(i==n/2)
            cout<<"*\t";
            if(i>n/2){
                if(j<(n/2+n-i) && j>=n/2)
                cout<<"*\t";
                else
                cout<<"\t";
            }
            
        }
        cout<<endl;
    }

    //write your code here
    
}