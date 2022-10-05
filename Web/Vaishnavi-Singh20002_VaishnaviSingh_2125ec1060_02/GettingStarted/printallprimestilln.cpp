#include <iostream>
using namespace std;
int main(){
    int low, high;
   
    cin >> low >> high;
    for(int i=low;i<=high ; i++)
    { 
           int count=0;
        for(int j=2; j*j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
        if(count==0)
        cout<<i<<"\n";
    
    }
    
    return 0;

    

}