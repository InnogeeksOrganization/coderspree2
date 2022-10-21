#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,k=1;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i+j<=2*i){
            cout<<k<<"\t";
            k++;
            }
        }
        cout<<endl;
    }
    
   //write your code here
   
}