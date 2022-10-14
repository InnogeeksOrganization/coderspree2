#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int s=n/2,a=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=s;j++){
    cout<<("\t");
    }
    for(int j=1;j<=a;j++){
        cout<<("*\t");
    }
    cout<<endl;
    if(i<=n/2){
    s--;
    a=a+2;
    }
    else{
    s++;
    a=a-2;
    }
}
    return 0;
   }
