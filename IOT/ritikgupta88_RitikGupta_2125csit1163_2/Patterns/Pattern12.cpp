#include <iostream>
using namespace std;
int fibo(int n);
int main(int argc, char **argv){
    int n,k=1;
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            if(i+j<=2*i){
            cout<<fibo(k)<<"\t";
            k++;
            }
        }
        cout<<endl;
    }
}
    int fibo(int n){
        if(n==1 )
        return 0;
        if(n==2)
        return 1;
       
        else 
        return(fibo(n-1)+fibo(n-2));
    
   //write your code here
   
}