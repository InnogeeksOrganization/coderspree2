#include <bits/stdc++.h>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;

    vector<pair<int,int>> v;
    int i=1;
    while(n)
    {
        //Assigning digit to first of pair & index to second of pair
        v.push_back(make_pair(n%10,i++)); 
        n/=10;
    }
    //Sorting pairs according to digits in decending order
    sort(v.rbegin(),v.rend());
    for(auto it : v)
        cout<<it.second;
    return 0;
}