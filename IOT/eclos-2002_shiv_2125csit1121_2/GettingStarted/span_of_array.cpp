#include <iostream>
using namespace std;
int main() {
    int n,a,m=0,k=2147483647;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>m)
          m=a;
        if(a<k)
          k=a;
    }
    cout<<m-k;
}
