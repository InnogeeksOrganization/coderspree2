#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int k=1;
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++)
    {
    if(j<=i){
    cout<<k<<"	";
    k++;
    }
}
cout<<endl;
}
}