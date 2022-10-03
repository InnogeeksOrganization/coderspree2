#include<iostream>
using namespace std;
int main()
{
    int l,u,c=0;
    cin>>l;
    cin>>u;
    while(l!=u)
    {   c=0;
        for(int i=2;i<=(l/2);i++)
        {
            if(l%i==0)
            {
                c++;
                break;
            }
            else
            {
                continue;
            }
        }
        if(c==0)
        {
            cout<<l<<endl;
        }
        l++;
    }
}