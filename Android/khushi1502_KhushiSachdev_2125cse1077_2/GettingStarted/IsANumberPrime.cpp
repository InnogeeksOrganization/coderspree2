#include<iostream>
using namespace std;
int main()
{
    int n, i,t,j, count=0;
   cin>>t;
   for(i=0;i<t;i++){
    cin>>n;
    for(j=1; j<=n; j++)
    {
        if(n%j==0)
        {
            count++;
            break;
        }
    }
   if(count==2){
        cout<<"\nPrime ";
   }
    else{
        cout<<"\nNot Prime ";
    cout<<endl;}
   }
   
    return 0;
   
   
}