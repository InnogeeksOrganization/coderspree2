#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;
    int n ;
    while(t--){
        cin>>n;
        int c=0;
        for(int i=2;i<n;i++){
            if(n%i==0){
                c++;
            }
        }
        if(c==0){
            cout<<"prime"<<endl;
        }
        else {
           cout<<"not prime"<<endl;
        }
    }
  return 0;  //write your code here
    
}