#include<iostream>
#include<vector>

using namespace std;

void columnTraversal(vector<vector<int>> mat) {
    int m,n;
    n=mat.size();
    m=mat[0].size();
    for(int i=0;i<m;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<n;j++)
                cout<<mat[j][i]<<endl;
        }
        else
        {
            for(int j=n-1;j>=0;j--)
                cout<<mat[j][i]<<endl;
        }
        
    }
}

int main() {
  int n;
  int m;
  cin >> n;
  cin >> m;

  vector<vector<int>> mat;
  for (int i = 0; i < n; i++) {
    vector<int> arr;
    for (int j = 0; j < m; j++) {
      int ele;
      cin >> ele;
      arr.push_back(ele);
    }
    mat.push_back(arr);
  }

  columnTraversal(mat);
}