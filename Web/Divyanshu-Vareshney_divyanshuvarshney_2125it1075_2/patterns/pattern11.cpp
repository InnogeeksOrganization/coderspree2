#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    //write your code here
    int i,j,c=1;
        for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<c<<"\t";
            c++;
        }
        cout<<"\n";
    }
    
}