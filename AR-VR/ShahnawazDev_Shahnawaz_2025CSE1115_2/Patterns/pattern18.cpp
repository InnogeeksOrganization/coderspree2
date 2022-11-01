#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;
    int space=0;
    int space2=n-4;
    int star=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<space;j++)
            cout<<"\t";
        if(i==0)
            for(int j=0;j<n;j++)
                cout<<"*\t";
        else if(i<n/2)
        {
            cout<<"*\t";
            for(int j=0;j<space2;j++)
                cout<<"\t";
            space2-=2;
            cout<<"*\t";
        }
        else
        {
            for(int j=0;j<star;j++)
                cout<<"*\t";
            star+=2;
        }
        
        (i<n/2)?space++:space--;
        
        cout<<endl;
    }
    return 0;
}