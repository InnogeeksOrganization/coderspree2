#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    for(int i=1;i<=n/2;i++){
        for(int j=i-1;j<=n/2;j++){
            cout<<"*"<<"\t";
        }
        for(int j=1;j<=i;j++){
            cout<<"\t";
        }
        for(int j=1;j<=i-1;j++){
            cout<<"\t";
        }
        for(int j=i-1;j<=n/2;j++){
            cout<<"*"<<"\t";
        }
        cout<<endl;
    }
    int a=n;
    cout<<"*";
    do{
        cout<<"\t";
    }while(a--);
    cout<<"*"<<endl;
    
    for(int i=1;i<=n/2;i++){
        for(int j=0;j<=i;j++){
            cout<<"*"<<"\t";
        }
        for(int j=i;j<=n/2;j++){
            cout<<"\t";
        }
        for(int j=i;j<=(n/2)-1;j++){
            cout<<"\t";
        }
        for(int j=0;j<=i;j++){
            cout<<"*"<<"\t";
        }
        cout<<endl;
    }
}