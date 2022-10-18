#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,i,j,k=1;
    cin >> n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<< k<<"\t";
            k++;
        }
        cout<<endl;
    }
}