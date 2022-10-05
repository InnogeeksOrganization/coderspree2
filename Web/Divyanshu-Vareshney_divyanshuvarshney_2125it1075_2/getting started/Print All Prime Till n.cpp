#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;

    //write your code here
    int c,j,i;
    for(i=low;i<=high;i++){
        for(j=1;j<=i;j++){
            if(i%j==0){
                c++;
            }
        }
        if(c==2){
            cout<<i<<"\n";
        }
        c=0;
    }
    //DONE
}