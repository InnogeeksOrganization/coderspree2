#include <iostream>
using namespace std;
int main()
{
    int n,i,a=0,b=1,c;
    cin>>n;
    if(n==1)
    cout<<"0"<<endl;
    else if(n==2)
    cout<<"0"<<endl<<"1"<<endl;
    else 
    {
         cout<<"0"<<endl<<"1"<<endl;
        for(i=1;i<=(n-2);i++)
        {
            c=a+b;
            cout<<c<<endl;
            a=b;
            b=c;
        }
    }
return 0;
}

