#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        for(int i=1;i<=n/2;i++){
            if(n%i==0) count++;
            else continue;
        }
        if(count>1) cout<<"not prime"<<endl;
        if(count==1) cout<<"prime"<<endl;
    }
    return 0;
}