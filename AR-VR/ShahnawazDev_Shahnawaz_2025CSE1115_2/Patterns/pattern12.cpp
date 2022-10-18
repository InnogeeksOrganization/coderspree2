#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    int c1=0,c2=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<c1<<"\t";
            int t;
            t=c1;
            c1=c2;
            c2=t+c1;
        }
        cout<<endl;
    }
    return 0;    
}