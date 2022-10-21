/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int q=n/2;
    q++;
    for(int i=0;i<q;i++)
    {
        for(int j=1;j<=q-i;j++)
        {
            cout<<"*"<<"\t";
        }
        for(int j=1;j<=(2*i)+1;j++)
        {
            cout<<"\t";
        }
        for(int j=1;j<=q-i;j++)
        {
            cout<<"*"<<"\t";
        }
        cout<<"\n";
    }
    int p=n-2;
   int k=0;
   for(int i=2;i<=q;i++)
   {
       for(int j=1;j<=i;j++)
       {
           cout<<"*"<<"\t";
       }
       for(int j=1;j<=p-(2*k);j++)
       {
           cout<<"\t";
       }
       for(int j=1;j<=i;j++)
       {
           cout<<"*"<<"\t";
       }
       k++;cout<<"\n";
   }

}