#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    int i,j,k;
    int n,m;
    cin>>n;
    cin>>m;
int* arr= new int [n * m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        {
            cin >> *(arr + i*m +j);
        }
    }
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout << *(arr + i*m + j)<<" ";
        }
        cout<<endl;
    }

}