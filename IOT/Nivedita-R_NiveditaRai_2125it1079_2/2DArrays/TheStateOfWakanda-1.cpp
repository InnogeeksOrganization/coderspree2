#include<iostream>
#include<vector>

using namespace std;

void columnTraversal(vector<vector<int>> mat,int n,int m){
int i=0,j=0,s=0,t=n*m;
for(s=0;s<t;)
{
 if(j==n)
 {
    for(j=n-1;j>=0;j--)
    {cout<<mat[j][i]<<endl;
    s++;}
    j=0;
 }
 else{
     for(j=0;j<n;j++)
     {cout<<mat[j][i]<<endl;
     s++;}
     j=n;
 }
 i++;
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

  columnTraversal(mat,n,m);
}