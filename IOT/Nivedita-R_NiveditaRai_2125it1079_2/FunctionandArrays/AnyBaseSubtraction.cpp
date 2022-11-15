#include<iostream>
#include<cmath>
using namespace std;
int conversion2(int n,int b){
    int s=0,d,i=0;
 while(n!= 0)
    {
        d = n % b;
        s = s + d * pow(10.0,i);
        n = n / b;
        i++;
    }
return s;


}

int conversion1(int n,int b){
int r,s=0,i=0,t;
while(n!=0)
{
t=pow(b,i);
r=n%10;
s=s+(r*t);
i++;
n=n/10;}
return s;
}

int getSum(int b, int n1, int n2) {
     
  int p,q,s;
  p=conversion1(n1,b);
  q=conversion1(n2,b);
  s=conversion2(q-p,b);
  return s;

    
}


int main() {
    int b, n1, n2;
    cin >> b >> n1 >> n2;
    cout << getSum(b, n1, n2) << endl;
}