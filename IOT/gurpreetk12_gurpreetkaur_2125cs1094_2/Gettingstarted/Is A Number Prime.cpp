#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t,i=0;
    cin >> t;
    while(i!=t)
    {
        int n,c=0;
        cin>>n;
        for(int i=2;i<=(n/2);i++)
        {
            if(n%i==0)
            {
                c++;
                break;
            }
            else
            {
              continue;  
            }
        }
        if(c!=0)
        {
            cout<<"not prime"<<endl;
        }
        else
        cout<<"prime"<<endl;
        i=i+1;
    }

    
}