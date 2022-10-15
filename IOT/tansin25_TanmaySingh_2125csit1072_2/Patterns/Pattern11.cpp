#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,a=1;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
        cout<<a;
        cout<<("\t");
        a++;
        }
        cout<<("\n");
    }
   return 0;
    
}