#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;
    int k=0;

    
    for(int i=0;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            if(j>i && j<2*n-2-i)
            cout<<"\t";
            else{
            if(j<=i)
            k++;
           
            cout<<k<<"\t";
            if(i+j>=2*n-2)
            k--;
            }
        
        }
        cout<<endl;
    
    }
    
}