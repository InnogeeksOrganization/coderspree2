#include<iostream>
#include<iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==1||i==5)cout<<"*";
            else{
                if(i+j==6)cout<<"*";
                else cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
