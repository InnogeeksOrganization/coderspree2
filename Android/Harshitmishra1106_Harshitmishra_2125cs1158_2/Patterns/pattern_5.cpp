#include<iostream>
using namespace std;
int main()
{
    int i, j,N,space;
    cout<<"Enter the Number of Rows: ";
    cin>>N;
    space = N/2;
    for(i=1; i<=N/2+1; i++)
    {
        for(j=1; j<=space; j++)
            cout<<"  ";
        space--;
        for(j=1; j<=(2*i-1); j++)
            cout<<"* ";
        cout<<endl;
    }
    space = 1;
    for(i=1; i<=(N/2); i++)
    {
        for(j=1; j<=space; j++)
            cout<<"  ";
        space++;
        for(j=1; j<=(2*(N/2-i+1)-1); j++)
            cout<<"* ";
        cout<<endl;
    }
    cout<<endl;
    return 0;
    //write your code here
}