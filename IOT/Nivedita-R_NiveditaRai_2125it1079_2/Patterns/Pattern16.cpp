#include <iostream>

using namespace std;

int main()
{

 int i,j,k,l,m,n;
 cin >> n;
 for(i=1;i<=n;i++)
 {
     for(j=1;j<=i;j++)
     {
         cout<<j<<"\t";
     }
     for(k=n-1;k>=i;k--)
     {
         cout<<"\t";
     }
     for(k=n-2;k>=i;k--)
     {
         cout<<"\t";
     }
     for(m=i;m>=1;m--)
     { 
        if(i==n)
        { 
            cout<<m-1<<"\t";
            if(m==2)
            m--;
        }
        else
        cout<<m<<"\t";
     }
     cout<<"\n";
 }

    return 0;
}


