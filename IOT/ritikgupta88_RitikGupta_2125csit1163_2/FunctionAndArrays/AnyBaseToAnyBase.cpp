#include<iostream>
#include<math.h>
using namespace std;
static int AnyToAny(int n, int b1, int b2) {
 int sum =0,i=0;
    while(n!=0){
        sum =sum + (n%10)*pow(b1,i);
        n=n/10;
        i++;
        
    }
    i=0;
    int arr[9];
    while(sum!=0){
        arr[i]=sum%b2;
        sum=sum/b2;
        i++;
        }  
        int k=i;
    for(int i=k-1;i>=0;i--){
        cout<<arr[i];
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
  
}