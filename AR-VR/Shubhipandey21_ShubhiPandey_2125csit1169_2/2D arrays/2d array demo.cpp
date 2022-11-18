#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  int m;
  cin >> n;
  cin >> m;

  vector<vector<int>>marr;
  for (int i = 0; i < n; i++) {
    vector<int>sarr;
    for (int j = 0; j < m; j++) {
      int ele;
      cin >> ele;
      sarr.push_back(ele);
    }
    marr.push_back(sarr);
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << marr[i][j] << " ";
    }
    cout << endl;
  }
}
