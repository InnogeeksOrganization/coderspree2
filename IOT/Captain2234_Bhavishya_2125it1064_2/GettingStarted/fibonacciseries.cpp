#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int t1=0,t2=1,t3;
    cout<<t1<<endl<<t2<<endl;
   while(n!=2){ 
    t3=t2+t1;
    t1=t2;
    t2=t3;
    cout<<t3<<endl;
    n--;
   }
   
}