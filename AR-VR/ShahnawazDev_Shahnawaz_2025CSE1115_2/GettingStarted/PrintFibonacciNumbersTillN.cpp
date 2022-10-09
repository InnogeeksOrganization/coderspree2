#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    int t1=0, t2=1, temp;
    for(int i=0;i<n;i++)
    {
        cout<<t1<<endl;
        temp=t1;
        t1=t2;
        t2=t1+temp;
    }
    return 0;
}