#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,i,j,m;
    cin >> n;
    m=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            cout<<"*\t";
        }
        m--;
        cout<<"\n";
    
    }
}