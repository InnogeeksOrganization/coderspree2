#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;
    while(t--)
    {
        int num,flag=1;
        cin>>num;
        if(num>3)
            for(int i=2;i<num;i++)
            {
                if(num%i==0)
                    flag=0;
            }
        if(flag) cout<<"prime\n";
        else cout<<"not prime\n";
    }
    return 0;
}