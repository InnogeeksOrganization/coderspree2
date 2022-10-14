
#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                if(i==j || j==0){
                arr[i][j]= 1 ;
                cout<<"1\t";
                }
             else if(j>0 && j<i){
                arr[i][j]=(arr[i-1][j-1] + arr[i-1][j]);
                cout<<arr[i][j]<<'\t';
             }
            
        }
        cout<<endl;
    }
}