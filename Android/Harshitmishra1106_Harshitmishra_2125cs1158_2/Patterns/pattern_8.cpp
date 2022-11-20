#include <iostream>
#include<iomanip>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            if(j==n-i+1)
            cout<<"*";
            else cout<<"    ";
        }
        cout<<"\n";
    }
    //write your code here
    return 0;
}