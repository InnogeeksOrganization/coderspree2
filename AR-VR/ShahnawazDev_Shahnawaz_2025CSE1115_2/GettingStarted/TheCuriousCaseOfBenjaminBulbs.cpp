#include<iostream>
using namespace std;

int main(int argc, char** argv){
    int n,i=1;
    cin>>n;
    
    while(i*i<n)
    {
        cout<<i*i<<endl;
        i++;
    }
   return 0;
}