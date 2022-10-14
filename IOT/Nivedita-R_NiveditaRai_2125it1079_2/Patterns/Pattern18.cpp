#include <iostream>
using namespace std;
int main(int agrc, char**argv){
    int n;
    cin >> n;
int i,j,k,l;
    int sp=0,st=n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=sp;j++)
        cout<<"\t";
       for (int j = 1; j <= st; j++)
      {
        if ( i > 1 && i <= n / 2 && j > 1 && j < st) 
        { 
          cout<<"\t";
        }
        else
        {
          cout<<"*\t";
        }
      }
      cout<<"\n";
    
    if(i<=n/2)
    {
        sp=sp+1;
        st=st-2;
    }
    else
    {
        sp=sp-1;
        st=st+2;
    }}
    cout<<"\n";
}