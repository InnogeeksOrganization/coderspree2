#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    //write your code here
    for (int i = 1; i * i <= n; i++)
    {
      cout<<(i * i)<<"\n";
    }
    return 0;
}