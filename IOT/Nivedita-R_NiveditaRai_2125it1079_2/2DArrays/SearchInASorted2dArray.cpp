#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target,int n)
{
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<n;j++)
      if(matrix[i][j]==target)
      {
          cout<<i<<endl<<j;
          return 1 ;
      }
  }
}

int main()
{
  int n, target;
  cin >> n;
  vector<vector<int>> mat(n, vector<int> (n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> mat[i][j];
  cin >> target;

  if (!searchMatrix(mat, target,n)) cout << "Not Found\n";
}
  
