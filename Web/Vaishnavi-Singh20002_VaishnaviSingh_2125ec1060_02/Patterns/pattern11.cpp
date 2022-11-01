#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
   int number=1;
   int s=1;
   for(int i=1;i<=n;i++){
       for(int j=1;j<=s;j++){
           cout<<number<< "\t" ;
           number++;
       }
       cout<<"\n" ;
       s++;
   }
    
    
    //write your code here
    
}