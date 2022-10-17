#include <iostream>
using namespace std;
// xyz
int main(){
    int n;
    cin >> n;
    
   //write your code here
   
   for(int i = 1; i<=n; i++){
       for(int j = i; j>0; j--){
           cout << "*\t";
       }
       cout << "\n";
   }
   return 0;
}