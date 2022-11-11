#include <iostream>
using namespace std;
int main()
{
  int n, m;
  cin >> n >> m;
  int mat[n][m];
  for(int i=0;i<n;i++)
  {
      for(int j=0;j<m;j++)
      cin>>mat[i][j];
  }
 int i=0,j=0, st=6;
while(i>=0 && i<n && j>=0 && j<m) {
     if(mat[i][j]==0)
      {if (st==6)
        j++;
        else if(st==4)
        j--;
        else if(st==2)
        i--;
        else
        i++;
     }
     else if(mat[i][j]==1)
     {
        if (st==6)
        {i++;
        st=8;continue;}
        if(st==4)
        {i--;
        st=2;
            continue;
        }
        if(st==2)
        {j++;
        st=6;
            continue;
        }
        if(st==8)
        {j--;
        st=4;
            continue;
        }
     }
    }

if(i>n-1)
i--;
else if(j>m-1)
j--;
cout<<i<<"\n"<<j<<"\n";
  return 0;
}