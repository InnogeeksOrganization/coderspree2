#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n,temp,div,dig,count=0;
    cin>>n;
    temp = n;
    while(n!=0){
      n = n/10;
      count++;
    }
    
    while(temp!=0){
      count--;
      div = pow(10,count);
      dig = temp/div;
      cout<<dig<<endl;
      temp = temp %div;
    }
    return 0;
}