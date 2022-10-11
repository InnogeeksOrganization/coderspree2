#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int n,i,j;
    cin >> n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(j-i>=0)
                cout<<"*\t";
            else
                cout<<"\t";
        }
        cout<<endl;
    }
   
}