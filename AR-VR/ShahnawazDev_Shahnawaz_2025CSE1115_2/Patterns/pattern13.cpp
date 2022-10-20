#include<iostream>
using namespace std;
int fact(int n)
{
    int fac=1;
    while(n)
    {
        fac=fac*n;
        n--;
    }
    return fac;
}
int main(int argc, char **argv){
    int n;
    cin >> n;
    
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
            cout<<fact(i)/(fact(i-j)*fact(j))<<"\t"; //iCj
        cout<<endl;
    }
    return 0;
}
