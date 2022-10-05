#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t,k;
    cin >> t;
    int n;
    for(int i=0;i<t;i++){
        cin>>n;
        for(int j=2;j<=n;j++){
            if(n%j==0)
            k++;
        }
        if(k>=2 )
        cout<<"not prime\n";
        else
        cout<<"prime\n";
        k=0;
    }
    
}
