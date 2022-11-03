#include<iostream>
using namespace std;
int DecToAny(int n, int b) {
  
    int arr[10],i=0;
    while(n!=0){
        arr[i]=n%b;
        n=n/b;
        i++;
        }  
        int k=i;
        for(int i=k-1;i>=0;i--){
            cout<<arr[i];
        }
       
//write your code here
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
   DecToAny(n, b);
 
}