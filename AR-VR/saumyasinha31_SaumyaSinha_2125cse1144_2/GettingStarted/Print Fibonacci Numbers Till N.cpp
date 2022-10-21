#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
      int a=0;
    int b=1;
    int c= a+b;
    int n;
    cin >> n;
      
     cout<<0<<endl<<1<<endl;
        for(int i=2;i<n;++i){
            c=a+b;
            cout<<c<<endl;
            a=b;
            b=c;
        }
    
  return 0;  //write your code here
    
}