#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
  for(int i=1;i<=n;i++){
      for(int j=n;j>=1;j--){
          if(j>=i)
          cout<<"*\t";
          else
          cout<<" ";
      }
      cout<<endl;
  }
   return 0;
}