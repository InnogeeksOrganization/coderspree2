#include<iostream>
using namespace std;
int AnyToDec(int n,int b){
    int ans=0;
    int power =1;
    while(n>0){
        int number =n%10;
        
        ans+= number*power;
        power*=b;
        n=n/10;
    }
 return ans;
}
int DecToAny(int n, int b)
{
    int ans=0;
    int power=1;
    while(n>0)
    {
        int number= n%b;
        
        ans+= number*power;
        power*=10;
        n=n/b;
    }
    return ans;
}
int AnyToAny(int n,int b1,int b2){
    int temp=AnyToDec(n,b1);
    int ans=DecToAny(temp,b2);
}
int main() {
  int n;
  int b1;
  int b2;
  cin >> n;
  cin >> b1;
  cin >> b2;
  int res = AnyToAny(n, b1, b2);
  cout << res << endl;
}