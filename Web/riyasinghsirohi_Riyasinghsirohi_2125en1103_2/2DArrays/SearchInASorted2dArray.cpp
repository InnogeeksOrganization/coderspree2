#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>>& matrix, int target)
{
    
  for(int i=0;i<matrix.size();i++)
  {
        for(int j=0;j<matrix.size();j++)
        {
            if(matrix[i][j]==target)
            {
                cout<<i<<endl<<j;
                return true;
            }
                
        }
  }
  
  return false;
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

  if (!searchMatrix(mat, target)) cout << "Not Found\n";
}