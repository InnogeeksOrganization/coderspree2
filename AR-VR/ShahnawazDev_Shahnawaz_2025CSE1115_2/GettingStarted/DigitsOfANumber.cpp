#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    vector<int> v;
    while(n)
    {
        v.push_back(n%10);
        n/=10;
    }
    for(auto it=v.end()-1;it>=v.begin();it--)
    {
        cout<<*it<<endl;
    }
    return 0;
}
