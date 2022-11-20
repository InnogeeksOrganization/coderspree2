#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int a1=n/2,a2=1;
    int i, j;
    for(i=1;i<=n;i++){
      for(j=1;j<=a1;j++){
        cout<<"	";
      }
      for(j=1;j<=a2;j++){
       cout<<"*	";
      }
      if(i<=n/2){ 
        a1--;
        a2=a2+2;  
      }
      else{
        a1++; 
        a2=a2-2;
      }
      cout<<endl; 
    }
    return 0;
}
