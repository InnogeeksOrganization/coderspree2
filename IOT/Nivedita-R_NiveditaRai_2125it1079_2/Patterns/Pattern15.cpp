#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
int i,j,k;
    int sp = n / 2, st = 1;
    for (int i = 1; i <= n; i++)
    { if(i <= n/2)
     k=i;
     else
     k=n-i+1;
      for (int j = 1; j <= sp; j++)
      {
        cout<<"\t";
      }
      for (int j = 1; j <= st; j++)   
      {
    cout<<k<<"\t";
    if(j <=st / 2)
      k++;
      else 
      k--;
    }
      
      if ( i <= n / 2)
      { sp--;                 
        st += 2;        
      }
      else
      {
        sp++;               
        st -= 2;                
      }
      cout<< endl;
      
    }
}