#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;

    //write your code here
    for(int i = low;i<=high;i++){
        int count=0;
        if(i==0||i==1){
            count=1;
        }
        for(int j=2;j<=i/2;j++){
            if(i%j==0){
                count++;
                break;
            }
        }
        if(count==0){
            cout<<i<<endl;
        }
    }

}