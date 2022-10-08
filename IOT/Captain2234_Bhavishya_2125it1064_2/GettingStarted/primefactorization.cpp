#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int n;
    cin >> n;
    int k=2,z=0,rem=0,a[10000],i;
    while(n!=1){
        rem=n%k;
         if(rem==0){
            a[z]=k;
     z++;
      n=n/k;
         }
        else
        k++;
        
    }  
    for(i=0;i<z;i++){
        cout<<a[i]<<" ";
    }
        
    
return 0;
}
