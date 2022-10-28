#include <iostream>

using namespace std;

int main()
{
    int n,j=1,var=1,a=1;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i==1)
        {
         cout<<"0";
         cout<<"\n";
         continue;
        }
        if(i==2)
        {
            cout<<"1"<<"\t"<<"1";
        }
        else
        {
           for(int k=1;k<=i;k++)
           {
               var=a+j;
               cout<<var<<"\t";
               j=a;
               a=var;
           }
        }cout<<"\n";
    }

    return 0;
}