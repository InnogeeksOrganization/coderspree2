#include <iostream>
#include <vector>
using namespace std;

void upperDiagonal_traverse(int n, vector<vector<int>>& arr)
{
 for(int i=0;i<n;i++)
 {
    cout<<arr[i][i]<<endl;
    //  s++;
 }
 int c=1,i=0;
 for(c=1;c<=n;c++)
 {
     for(int j=i+c;j<n;)
     {
         cout<<arr[i][j]<<endl;
    //  s++;
     i++;j++;}
     i=0;
 }

}

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> arr(n, vector<int>(n));
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> arr[i][j];

  upperDiagonal_traverse(n, arr);
}