#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;

    int l=n;
    while(l>=0)
    {
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==l)
            {
                cout<<"*\t";
                
            }
            else
            cout<<"\t";
        }
        l--;
        cout<<endl;
    }
    }
    
}