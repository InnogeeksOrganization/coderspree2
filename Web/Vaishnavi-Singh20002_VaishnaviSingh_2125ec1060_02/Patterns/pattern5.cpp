#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a= n/2,b=1;
    for(int i=1;i<=n;i++){
         for (int j = 1; j <= a; j++){
        cout<<"	";
      }
      for (int j = 1; j <= b; j++){
       cout<<"*	";
      }
      if ( i <= n / 2){ a--;
      b+=2;  
      }
        else{
         a++; 
          b-=2;
          }
          cout<<endl; 
          }

    }

    //write your code here
