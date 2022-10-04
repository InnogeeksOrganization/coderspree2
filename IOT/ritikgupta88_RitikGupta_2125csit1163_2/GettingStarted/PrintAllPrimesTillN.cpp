#include <iostream>
#include<cmath>
using namespace std;
int main(int argc, char **argv){
    int low, high,k=0,i;
    cin >> low >> high;
    for(int i=low;i<=high;i++){
   
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0)
            k++;
        }
        if(k==0 )
        cout<< i<<endl;
        
         k=0;
    }
        
        return 0;
}
