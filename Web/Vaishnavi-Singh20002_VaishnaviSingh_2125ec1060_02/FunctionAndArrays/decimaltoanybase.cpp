#include<iostream>
using namespace std;
int DecToAny(int n, int b) {
//write your code here
     int temp =0;
     int power =1;
     while(n>0){
        int number = n% b;
        temp += number * power;
        power = power*10;
        n = n/b;
    
    }
    return temp;
}
int main() {
  int n;
  int b;
  cin >> n;
  cin >> b;
  int res = DecToAny(n, b);
  cout << res << endl;
}