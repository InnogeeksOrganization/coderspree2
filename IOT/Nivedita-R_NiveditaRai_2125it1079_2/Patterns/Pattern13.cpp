#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    
    int i,j,k,l;
     for ( i=0; i <n ; i++)
    {
      int id = 1;
      for ( j=0; j <= i; j++)
      {
        cout<< id << "\t" ;
        int id1 = (id * (i - j)) / (j + 1);
        id = id1;

      }
      cout<<"\n";
    }
    
}
