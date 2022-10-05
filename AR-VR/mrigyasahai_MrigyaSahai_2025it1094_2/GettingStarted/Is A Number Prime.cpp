#include <iostream>

using namespace std;
int main(int argc, char** argv) {
  int t, num;
  int i, j, flag = 0;
  cin >> t;

  for (i = 0; i < t; i++)
  {
      cin >> num;
      flag = 0;
      
      for(j = 2; j*j<=num ; j++){
          if(num % j == 0)
          {
              flag++;
          }
      }
      if(flag == 0){
          cout<<"prime"<<endl;
      }
      else{
          cout<<"not prime"<<endl;
          
    }
  }
  return 0;
  
}
