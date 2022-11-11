#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
     int sp=0;
     int st=n;
    for(int i=1;i<=n;i++)
    {
        for(int j=sp;j>=1;j--)
        {
            cout<<"\t";
        }
        for(int j=st;j>=1;j--)
        {
            cout<<"*\t";
        }
        cout<<endl;
        st--;
        sp++;
    }

}