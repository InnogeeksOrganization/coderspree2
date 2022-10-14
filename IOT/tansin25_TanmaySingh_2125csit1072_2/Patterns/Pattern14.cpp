#include<iostream>
using namespace std;
int main(int agrc, char** argv){
    int n,c=1;
    cin >> n;
    while(c<=10)
    {cout<<n<<" * "<< c <<" = "<< n*c <<endl;
    c++;
    }
    return 0;
}