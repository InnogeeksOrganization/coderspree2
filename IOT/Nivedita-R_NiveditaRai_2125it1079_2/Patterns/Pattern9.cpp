#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int i,j,k;
    k = n-1;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(i==j || j==k )
            cout<<"*\t";
        else
            cout<< "\t";

    }
    k--;    
    cout<<"\n";
}

}