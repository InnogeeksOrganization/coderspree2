#include <iostream>
using namespace std;

int main()
{
    int n,q,m=0;
    cin>>n;
    q=n/2;
    q++;
    for(int i=0;i<q-1;i++)
    {
        for(int j=1;j<q-i;j++)
        {
            cout<<"\t";
        }
        for(int j=1;j<=2*i+1;j++)
        {
            if(j>i+1)
            {
                for(int k=1;k<=i;k++)
                {
                    cout<<m-k<<"\t";
                    j++;
                }
            }
            else
            {m=i+j;
            cout<<m<<"\t";}
        }
        cout<<"\n";
    }
   // int q=n/2;
     m=q;
    int c=1;
    int h=1;
    for(int i=q;i>0;i--)
    {
        for(int j=2;j<=c;j++)
        {
            cout<<"\t";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            if(j>i)
            {   
                if(m-h>=i)
                {cout<<m-h<<"\t";
                 h++;
                }
            }
            else
            {
                
                
                    cout<<i+j-1<<"\t";
                    m=i+j-1;
                
            }
        }
        c++;
        h=1;
        cout<<"\n";
    }
  
   
  

    return 0;
}
