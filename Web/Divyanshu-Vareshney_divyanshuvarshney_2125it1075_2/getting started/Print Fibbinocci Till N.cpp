#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    
    //write your code here
    int t1=0,t2=1,next;
    for(int i=1;i<=n;i++){
    if(i==1){
        cout<<t1<<"\n";
    }
    else if(i==2){
        cout<<t2<<"\n";
    }
    
    else{
        next=t1+t2;
        t1=t2;
        t2=next;
        cout<<next<<"\n";
    }
    }
    //DONE
    
}