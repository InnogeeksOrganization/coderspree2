#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin >>a>>b;
        for(int i=a; i<=b; i++)
        {
            int count=0;
            for(int j=2; j*j<=i; j++)
            {
                if(i%j==0)
                {
                    count=1;
                    break;
                }
            }
            if(count==0)
            {
                cout<<i<<"\n";
            }
        }
        return 0;
}