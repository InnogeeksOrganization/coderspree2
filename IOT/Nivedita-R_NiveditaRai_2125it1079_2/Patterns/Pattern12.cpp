#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n,*arr;
    cin >> n;
    arr=(int*)malloc((n*n)*sizeof(int));
    int i,j,k,l=0;
    int a=0,b=1;
    arr[0]=0;arr[1]=1;
    for(i=2;i<n*n;i++)
    {
        k=a+b;
        arr[i]=k;
        a=b;
        b=k;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++){
            {cout<<arr[l]<<"\t";
            l++;}
        }
        cout<<"\n";
    }
    
}