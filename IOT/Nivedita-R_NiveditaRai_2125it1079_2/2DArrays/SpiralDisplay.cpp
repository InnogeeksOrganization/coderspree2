#include <iostream>
using namespace std;

int main()
{int n,m,i,j,cc=0,cr=0,s=0;
cin>>m>>n;
int arr[m][n];
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
    {
        cin>>arr[i][j];
    }
}

int t=(n*m);
    while(s!=t)
  {  for(i=cr;i<m;i++)
    {
        cout<<arr[i][cc]<<" ";
        s++;
    }
    cc++;
    for(j=cc;j<n;j++)
    {
        cout<<arr[m-1][j]<<" ";
        s++;
    }
    m--;
    for(i=m-1;i>=cr;i--)
    {
        cout<<arr[i][n-1]<<" ";
        s++;
    }
    n--;
    for(j=n-1;j>=cc;j--)
    {
        cout<<arr[cr][j]<<" ";
        s++;
    }
    cr++;
  }

    
    return 0;
}

  