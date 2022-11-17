#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    int space,star;
    star = n/2+1;
    space = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<star;j++)
            cout<<"*\t";
        for(int j=0;j<space; j++)
            cout<<"\t";
        for(int j=0;j<star;j++)
            cout<<"*\t";
        if(i<n/2)
        {
            star--;
            space = space + 2;
        }
        else
        {
            star++;
            space = space - 2;
        }
        cout<<endl;
    }
    
}