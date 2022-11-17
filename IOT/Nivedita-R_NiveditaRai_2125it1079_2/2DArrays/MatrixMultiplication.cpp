#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,j,k;
    int n1,m1;
    cin>>n1;
    cin>>m1;
    int arr[n1][m1];
    for(i=0;i<n1;i++){
        for(j=0;j<m1;j++)
        {
            cin >> arr[i][j];
        }
    }
    int n2,m2;
    cin>>n2;
    cin>>m2;
    int arr2[n2][m2];
    for(i=0;i<n2;i++){
        for(j=0;j<m2;j++)
        {
            cin >> arr2[i][j];
        }
    }
    int arr3[n1][m2];
   if(m1!=n2)
   cout<<"Invalid input"<<endl;
  else{
            for (i = 0; i < n1; i++) {
             for (j = 0; j < m2; j++) {
            arr3[i][j]=0;
            

                for (int k = 0; k < m1; k++)
                    arr3[i][j] = arr3[i][j] + (arr[i][k] * arr2[k][j]);
             }
        }

   }
   for(int i=0;i<n1;i++){
       for(int j=0;j<m2;j++){
           cout<<arr3[i][j]<<" ";
       }
      cout<< endl;
   }
}