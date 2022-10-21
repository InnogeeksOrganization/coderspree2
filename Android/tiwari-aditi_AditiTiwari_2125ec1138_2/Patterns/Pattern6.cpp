#include<iostream>
using namespace std;

int main(){
    int n,num1,num2,i,j,k,l;
    cin>>n;
    num1 = n/2 + 1;
    num2 = n - num1;

    for(i=1;i<=num1;i++){
        cout<<"*\t";
        for(j=1;j<=num1-i;j++){
            cout<<"*\t";
        }
        for(k=1;k<=2*i-1;k++){
            cout<<"\t";
        }
        for(l=1;l<=num1-i;l++){
            cout<<"*\t"; }
        cout<<"*"<<endl;
    }

    for(i=num2;i>=1;i--){
        cout<<"*\t*\t";
        for(j=1;j<=num2-i;j++){
            cout<<"*\t";
        }
        for(k=1;k<=2*i-1;k++){
            cout<<"\t";
        }
        for(l=1;l<=num1-i;l++){
            cout<<"*\t"; }
        cout<<"*\t"<<endl;
    }    


}