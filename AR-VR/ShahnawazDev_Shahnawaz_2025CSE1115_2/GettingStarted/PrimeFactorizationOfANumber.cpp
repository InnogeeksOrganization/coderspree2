#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int n,i=2;
    cin >> n;
    
    while(i<=n)
    {
        if(n%i==0)
        {
            while(n%i==0)
            {
                cout<< i << " ";
                n/=i;
            }
            i++;   
        }    
        else
            i++;
    }
    return 0;
}
