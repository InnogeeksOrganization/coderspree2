#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
  int p = 0, t = n; 
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= p; j++) {
        cout<<"	"; 
        }
      for (int j = 1; j <= t; j++){
        cout<<"*	";
        }
     p++;  
      t--; 
     cout<<endl;
      }

}