#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int n;
    cin >> n;
    
    int j;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {  
            for(j=0;j<n/2+1;j++)
                cout<<"*\t";
            for(;j<n-1;j++)
                cout<<"\t";
            cout<<"*\t";
        }
        else if(i<n/2)
        {
            
            for(j=0;j<n/2;j++)
                cout<<"\t";
            cout<<"*\t";
            for(;j<n-2;j++)
                cout<<"\t";
            cout<<"*\t";   
        }
        else if(i==n/2)
        {
            for(j=0;j<n;j++)
                cout<<"*\t";
        }
        else if(i>n/2&&i<n-1)
        {
            cout<<"*\t";
            for(j=0;j<n/2-1;j++)
                cout<<"\t";
            cout<<"*\t";
            for(;j<n;j++)
                cout<<"\t";
        }
        else
        {
            cout<<"*\t";
            for(j=0;j<n/2-1;j++)
                cout<<"\t";
            for(;j<n-1;j++)
                cout<<"*\t";
        }
        cout<<endl;
    }
    return 0;
}