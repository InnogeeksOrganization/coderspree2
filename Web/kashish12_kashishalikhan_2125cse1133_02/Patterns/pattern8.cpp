#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
  int i,k;
        for(i=1;i<=n;i++){
            for(k=n-1;k>=i;k--){
              cout<<"\t";
            }
            cout<<"*";
            cout<<endl;
        }
}