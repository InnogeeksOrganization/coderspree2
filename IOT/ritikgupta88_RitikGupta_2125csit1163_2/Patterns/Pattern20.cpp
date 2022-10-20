#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j==0 || j==n-1)
            cout<<"*\t";
            else if(j==i && j>=n/2 && i!=n-1)
            cout<<"*\t";
            else if(j+i==n-1 && j<=n/2 && i!=n-1)
            cout<<"*\t";
            else
            cout<<"\t";
            
            
        }
        cout<<endl;
    }

}