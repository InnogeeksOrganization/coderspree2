#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int per = 0,cur = 1, nex = 0;
    for(int i = 1; i <= n; i++){
        if(i == 1){
        cout<<per<<"\n";
        continue;
        }
        if(i == 2){
        cout<<cur<<"\n";
        continue;
        }
        nex = per + cur;
        per = cur;
        cur = nex;
        cout<<nex<<"\n";
    }
    return 0;
}