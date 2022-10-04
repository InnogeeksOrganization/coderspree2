#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;
    int num, i, j, flag = 0;

   for (i = low; i <= high; i++)
  {
      num = i;
      flag = 0;
      
      for(j = 2; j*j<= num; j++){
          if(num % j == 0)
          {
              flag++;
          }
      }
      if(flag == 0){
          cout<<num<<endl;
      }
  }
  return 0;
  
}
