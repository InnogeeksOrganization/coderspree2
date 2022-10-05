#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int i,j;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            if (i==0||i==4)
            cout<<"*";
            else{
                if(i+j==4)
                cout<<"*";
                else
                cout<<" ";
            }
            
            
        }
        cout<<"\n";
    }
    
    return 0;
}
