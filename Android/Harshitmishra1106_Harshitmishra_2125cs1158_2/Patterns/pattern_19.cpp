#include <iostream>
using namespace std;
int main(int argc, char** argv) {
  int n;
  cin >> n;
  for (int i = 1 ; i <= n; i++)
  {for (int j = 1 ; j <= n; j++)
    {
      if ( i == 1) { /*first component*/
        if ( j == n || j <= n / 2 + 1){
          cout<<"*\t"; }
        else{
          cout<<"\t";}
      }
      else if (i <= n / 2) { /*second component*/
        if ( j == n || j == n / 2 + 1)  {
          cout<<"*\t";}
        else{ 
          cout<<"\t";}
      }
      else if ( i == n / 2 + 1) { /*third component */
        cout<<"*\t";}
      else if (i < n) { /* fourth component*/
        if (j == 1 || j == n / 2 + 1)  {
          cout<<"*\t";}
        else{
          cout<<"\t";}
      }
      else /*fifth component*/{
        if (j == 1 || j >= n / 2 + 1){
          cout<<"*\t";}
        else{
          cout<<"\t";}
      }
    }
    cout<<endl;
  }
  return 0;
}