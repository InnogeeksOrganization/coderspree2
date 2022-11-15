#include <iostream>
using namespace std;
int fibo(int n);

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cout<<fibo(i)<<endl;
    }
    
}
int fibo(int n){
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return(fibo(n-2)+fibo(n-1));
}
