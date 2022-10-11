#include<iostream>
using namespace std;
int main(){
    int t,n,mid,i,count;
    cin>>t;
    
    while(t!=0){
        cin>>n;
        if(n==1)
            cout<<"not prime"<<endl;
        else if (n==2)
            cout<<"prime"<<endl;
        else{
            mid = int(n/2);
            count = 0;
            for(i=2;i<=mid;i++){
                if(n%i==0)
                    count++;
                }
            if(count==0)
                cout<<"prime"<<endl;
            else
                cout<<"not prime"<<endl;
            }
        t--; }
    return 0;    
}