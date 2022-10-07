#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin >> n;
    int a=n;
    while(n){
        count++;
        n=n/10;
        
    }
    int arr[count],d=count;;
    count--;
    do{
        int b,c;
        b=pow(10,count);
        c=a/b;
        arr[count]=c;
        a=a%b;
    }while(count--);
    for(int i=0;i<d;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

    
}