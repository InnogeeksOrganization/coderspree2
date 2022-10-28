#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int str=-1,spaces=(n/2)+1;
for(int i=1;i<=n;i++){
if(i<=(n+1)/2){
    str+=2;
    spaces--;
}
else{
    str=str-2;
    spaces++;
}
for(int j=1;j<=spaces;j++){
    cout<<"\t";
}
for(int j=1;j<=str;j++){
    cout<<"*\t";
}
cout<<endl;
}
    
return 0;
    }
