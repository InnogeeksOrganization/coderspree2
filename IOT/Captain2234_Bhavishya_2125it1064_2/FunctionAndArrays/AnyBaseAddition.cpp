#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getSum(int b, int n1, int n2) {
    int sum;
    if(b==10){
        sum=n1+n2;
        return sum;
    }
    else{
          int c=0,add1=0,add2=0;
while(n1!=0||n2!=0){
    int rem1=n1%10;
    int rem2=n2%10;
     add1=add1+rem1*pow(b,c);
     add2=add2+rem2*pow(b,c);
      c++;
    n1=n1/10;
    n2=n2/10;
}
int add=add1+add2;
 int po = 1;
  int ans = 0;
  while (add > 0) {
    int digit = add % b;
    ans += digit * po;
    po = po * 10;
    add = add / b;
  }
  return ans;

    }

    
}


int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getSum(b, n1, n2) << endl;
}