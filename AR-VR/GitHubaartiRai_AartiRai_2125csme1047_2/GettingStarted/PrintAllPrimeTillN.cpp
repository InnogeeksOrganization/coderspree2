#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t,n,m,i,COUNT =0;
    cin >> t;
    while(t--)
    {
    {
      cin >> n;
      COUNT=0;
      for(m=2;m<n;m++)
      if(n%m==0)
      COUNT++;
    }
    {
        if(COUNT == 0)
         cout<<"prime"<<endl;
         else
      cout<< "not prime"<<endl;  
    }
}
    
}
