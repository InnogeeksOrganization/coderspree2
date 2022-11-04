#include<iostream>
#include<bits/stdc++.h>
using namespace std;
 void AnyToAny(int n, int b1, int b2) {
if(b1==10){
      int a[1000],i=1;
    while(n!=0){
int rem=n%b2;
 a[i]=rem;
i++;
n=n/b2;
}
for(int k=i-1;k>=1;k--){
    cout<<a[k];
}
}
else{
       int c=0,add=0,n1;
       n1=n;
while(n!=0){
    int rem=n%10;
     add=add+rem*pow(b1,c);
    c++;
    n=n/10;
}
add;
   int arr[1000],j=1;
    while(add!=0){
int rem=add%b2;
 arr[j]=rem;
j++;
add=add/b2;
}
for(int m=j-1;m>=1;m--){
    cout<<arr[m];
}
}
}
int main() {
  int n;
  int b1;
  int b2;
  cin >> n;
  cin >> b1;
  cin >> b2;
   AnyToAny(n, b1, b2);
  //cout << res << endl;
}
