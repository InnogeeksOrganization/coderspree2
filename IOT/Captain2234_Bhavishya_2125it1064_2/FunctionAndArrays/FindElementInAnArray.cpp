#include<iostream>
using namespace std;


int main(){
int n;
cin>>n;
int a[n],index=-1;
for(int i=0;i<n;i++){
    cin>>a[i];
}
   int d;
   cin>>d;
   for(int i=0;i<n;i++){
       if(d==a[i]){
       index=i;
       break;
       }
   }
   if(index==-1)
   cout<<index<<endl;
   else
   cout<<index<<endl;
    
}