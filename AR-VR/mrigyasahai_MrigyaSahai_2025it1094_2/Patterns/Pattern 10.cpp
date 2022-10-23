#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int i, j;
    int a1=n/2;
    int a2=-1;
    int size=n;
    for(i=1;i<=n;i++){
        for(j=1;j<=a1;j++){
            cout<<"\t";
        }
        cout<<"*\t";
        for(j=1;j<=a2;j++){
            cout<<"\t";
        }
        if (i>1&&i<size){
            cout<<"*\t";
        }
        cout << endl;
        if (i<=n/2){
            a1--;
            a2+=2;
        }
        else{
            a1++;
            a2-=2;
        }
    }
    return 0;
}
