#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<n/2){
                if(i==0)
                cout<<"*\t";
                else if(i==j || i+j==n-1)
                cout<<"*\t";
                else
                cout<<"\t";
            }
            if(i>=n/2){
                if(i>=j && j+i>=n-1)
                cout<<"*\t";
                 else
                cout<<"\t";
            }
        }
        cout<<endl;
    }
    //write your code here
    
}