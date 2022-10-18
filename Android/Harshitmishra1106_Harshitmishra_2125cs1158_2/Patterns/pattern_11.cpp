#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,count=1;
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<count<<"\t";
            count++;
        }
        cout<<endl;
    }
    //write your code here
    return 0;
}