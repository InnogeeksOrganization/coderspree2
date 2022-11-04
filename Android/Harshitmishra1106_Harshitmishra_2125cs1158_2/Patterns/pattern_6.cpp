#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int st = n/2 + 1, sp = 1; // sp = spaces ; st = stars
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= st; j++) //print stars
      {
        cout<<"*\t";
      }
      for (int j = 1; j <= sp; j++) //print space
      {
        cout<<"\t"; 
      } 
      for (int j = 1; j <= st; j++) //print stars
      {
        cout<<"*\t"; 
      }
  
      if ( i <= n / 2)
      { st--; 
        sp+=2;  }
        else
        {
          st++;
          sp-=2; }
          cout<<endl;
          }
    return 0;
    
}