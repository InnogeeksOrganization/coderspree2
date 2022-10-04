#include <iostream>
#include<cmath>
using namespace std;
int main(){
    int t,i,j,n,c;
    cin >> t;
    if(t>=1 && t<=10000)
    {
        for (i=0;i<t;i++)
    {
        c=0;
        cin>>n;
        if(n>=2 && n<=pow(10,9))
        {
    
        for(j=1;j<=n;j++)
        {
            if(n%j==0)
            c++;
            
        }
        if(c==2)
        cout<<"prime"<<endl;
        else
        cout<<"not prime"<<endl;
        }
    }

    } 
    
}