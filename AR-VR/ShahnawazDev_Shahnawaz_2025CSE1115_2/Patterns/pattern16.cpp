#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;
    
    int space=n-2;
    int num=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j<=i)
                cout<<j+1<<"\t";
            else
                cout<<"\t";
        }
        for(int j=0; j<space;j++)
            cout<<"\t";
        space--;
        num=i+1;
        if(i==n-1) num--;
        for(int j=num; j>0;j--)
            cout<<j<<"\t";
        cout<<endl;
    }
    return 0;
}