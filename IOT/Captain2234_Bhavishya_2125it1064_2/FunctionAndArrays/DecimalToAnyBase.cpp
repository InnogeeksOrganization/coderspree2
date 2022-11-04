#include<iostream>
using namespace std;
void DecToAny(int n, int b) {
    int a[1000],i=1;
    while(n!=0){
int rem=n%b;
 a[i]=rem;
i++;
n=n/b;
}
for(int k=i-1;k>=1;k--){
    cout<<a[k];
}
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
   DecToAny(n, b);
  
}