#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
int i,j,k;
for(i=0;i<n;i++)
{
    for(j=n-1;j>=0;j--)
    {
        if(j==i)
        cout<<"*\t";
        else
        cout << "\t";
        

    }
    cout << "\n";
}
   
}