#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
int i,j,k;
    int sp = n / 2, st = 1;
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= sp ; j++) 
      {
        if ( i == n / 2 + 1)    
        {
         cout<<"*\t";
        }
        else
        {
          cout<<"\t";
        }
      }
      for (int j = 1 ; j <= st; j++) 
      {
        cout<<"*\t";
      }
      if ( i <= n / 2)   
      {
        st++;       
      }
      else {
        st--;       
      }
      cout<<"\n";
    }
  }
      
