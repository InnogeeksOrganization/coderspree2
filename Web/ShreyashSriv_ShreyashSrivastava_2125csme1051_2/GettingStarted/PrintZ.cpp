#include<bits/stdc++.h>
using namespace std;
int main() {
  for(int i=1;i<=5;i++){
      if(i%5==0 || i==1){
          for(int j=0;j<5;j++){
              cout<<"*";
          }
          cout<<endl;
      }
      else{
        for(int j=0;j<5;j++){
            if(j==5-i) cout<<"*";
            else cout<<" ";

        }
        cout<<endl;
      }
      
  }
  return 0;

}