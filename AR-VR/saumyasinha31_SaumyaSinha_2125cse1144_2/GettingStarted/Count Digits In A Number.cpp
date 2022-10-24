#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int count,r;
    while(n!=0){
        r=n%10;
       
        count++;
         n=n/10;
        
    }
    cout<<count<<endl;
    //write your code here
    
}