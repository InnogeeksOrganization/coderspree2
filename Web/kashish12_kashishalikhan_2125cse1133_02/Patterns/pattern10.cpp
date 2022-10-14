#include <iostream>
using namespace std;
int main() {
   int n, i, j, mid;
   cin >> n;
   if(n %2 == 1) { 
      n++;
   }
   mid = (n/2);
   for(i = 1; i<= mid; i++) {
      for(j = 1; j<=(mid-i); j++) { 
         cout << "\t";
      }
      if(i == 1) {
         cout << "*\t";
      }else{
         cout << "*\t";
         for(j = 1; j<=2*i-3; j++) { 
            cout << "\t";
         }
         cout << "*\t";
      }
      cout << endl;
   }
   for(i = mid+1; i<n; i++) {
      for(j = 1; j<=i-mid; j++) { 
         cout << "\t";
      }
      if(i == n-1) {
         cout << "*\t";
      }else{
         cout << "*\t"; 
         for(j = 1; j<=2*(n - i)-3; j++) { 
            cout << "\t";
         }
         cout << "*\t";
      }
      cout << endl;
   }
}