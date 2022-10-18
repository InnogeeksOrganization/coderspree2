#include<iostream>
using namespace std;
int main()
{
  
    int n;
    cin>>n;
    int st = n / 2 + 1, sp = 1; 
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= st; j++)  
      {
        printf("*	");
      }
      for (int j = 1; j <= sp; j++)  
      {
        printf("	");
      }
      for (int j = 1; j <= st; j++)   
      {
        printf("*	");
      }

      if ( i <= n / 2)
      { st--;                  
        sp += 2;                
      }
      else
      {
        st++;                   
        sp -= 2;               
      }
        cout<<endl;
    }
  }