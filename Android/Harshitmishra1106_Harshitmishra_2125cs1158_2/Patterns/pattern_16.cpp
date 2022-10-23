#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;
    int sp = 2*n - 3;//space
    int x = 1;
    for (int i = 1; i <= n; i++)
    {
      int count = 1; //for each row count==1
      for (int j = 1; j <= x; j++)
      {
        cout<<count<<"\t";
        count++;
      }
      for (int j = 1; j <= sp; j++)
      {
        cout<<"\t";
      } 
      if ( i == n) {  
        x--; 
        count--;}
      for (int j = 1; j <= x; j++)
      {
        count--; 
        cout<<count<<"\t";
      }
      x++;
      sp=sp-2;
      cout<<endl;
    }
    return 0;
}