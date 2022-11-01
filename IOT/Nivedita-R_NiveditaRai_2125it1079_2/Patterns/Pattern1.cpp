#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
int i,j,k;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(j<=i)
        {
            cout<<"*\t";
        }
        

    }
    cout << endl;
}
   
}