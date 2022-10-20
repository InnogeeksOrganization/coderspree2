#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,c=0;
    cin >> n;
    int d=(n-1)/2;
    for(int i=1;i<=n;i++)
    {
        if(c<d)
        {
            for(int j=0;j<d-c;j++)
            {
                cout<<"\t";
            }
            for(int j=0;j<(2*i)-1;j++)
            {    
                cout<<"*\t";
            }cout<<endl;
        }
        else if(c==d)
        {  
            for(int j=0;j<n;j++)
            {
                cout<<"*\t";
            }
        }
        c++;
    }cout<<endl;
    for(int i=1;i<=d;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"\t";
        }
        for(int j=1;j<=n-(2*i);j++)
        {
            cout<<"*\t";
        }cout<<endl;
    }
    
    
}
