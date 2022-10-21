#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;
    
    int star;
    star = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            if(i==n/2)
                cout<<"*\t";
            else
                cout<<"\t";
        }
        for(int j=0;j<star;j++)
            cout<<"*\t";
        if(i<n/2)
            star++;
        else
            star--;
        cout<<endl;
    }
    return 0;
}