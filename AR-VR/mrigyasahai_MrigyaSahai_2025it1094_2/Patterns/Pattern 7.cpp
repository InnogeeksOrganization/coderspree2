#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    int i, j;
    int a1=0,a2=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=a1;j++){
            cout<<"\t";
        }
        for(j=1;j<=a2;j++){
            cout<<"*\t";
        }
        a1++;
        cout<<endl;
    }
    
}
