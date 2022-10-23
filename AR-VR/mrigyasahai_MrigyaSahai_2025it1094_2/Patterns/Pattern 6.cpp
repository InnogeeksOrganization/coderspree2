#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    int i, j;
    int a2=(n/2)+1, a1=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=a2;j++){
            cout<<"*\t";
        }
        for(j=1;j<=a1;j++){
            cout<<"\t";
        }
        for(j=1;j<=a2;j++){
            cout<<"*\t";
        }
        if(i<=n/2){
            a1+=2;
            a2--;
        }
        else{
            a1-=2;
            a2++;
        }
        cout<<endl;
    }
    return 0;
    
}
