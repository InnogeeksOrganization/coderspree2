#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1,m1,n2,m2;
    cin>>n1>>m1>>n2>>m2;
    int a1[n1][m1],a2[n2][m2],a3[n1][m2];
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<m1;j++)
        cin>>a1[i][j];
    }
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<m2;j++)
        cin>>a2[i][j];
    }
    if(m1!=n2)
    cout<<"Invalid input"; 
    else{ 
        for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m2;j++)
            {
               int sum=0;
                for(int k=0;k<m1;k++)
                sum+=a1[i][k]*a2[k][j];
                a3[i][j]=sum;
            }
        }
         for(int i=0;i<n1;i++)
        {
            for(int j=0;j<m2;j++)
            {
               cout<<a3[i][j]<<" ";
            } cout<<"\n";
        }
        
    }
    return 0;
    
}