#include<bits/stdc++.h>
using namespace std;
void input(vector<vector<int>>& A,int n,int m)
{
    int i,j,temp=0;
    for(i=0;i<n;i++)
        for(j=0;j<m;j++)
        {
            cin>>temp;
            A[i].push_back(temp);   
        }
}
void multiply(vector<vector<int>>& M,vector<vector<int>>& A1,vector<vector<int>>& A2,int n1,int m1,int n2,int m2)
{
    int i,j,k;
    for(i=0;i<n1;i++)
    {
        for(j=0;j<m2;j++)
        {   
            int temp=0;
            for(k=0;k<m1;k++)
            {
                temp+= (A1[i][k]*A2[k][j]);
            }
            M[i].push_back(temp);
        }
    }
}

void display(vector<vector<int>> &A,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<A[i][j]<<" ";
        cout<<endl;
    }
}
using namespace std;
int main() {
    
    int n1,m1,n2,m2;
    vector<vector<int>> A1,A2,M;
    cin>>n1>>m1;
    A1.resize(n1);
    input(A1,n1,m1);

    cin>>n2>>m2;
    A2.resize(n2);
    input(A2,n2,m2);
    
    if(m1 == n2)
    {
        M.resize(n1);
        multiply(M,A1,A2,n1,m1,n2,m2);
        display(M,n1,m2);
    }
    else 
        cout<<"Invalid input";
    return 0;
}