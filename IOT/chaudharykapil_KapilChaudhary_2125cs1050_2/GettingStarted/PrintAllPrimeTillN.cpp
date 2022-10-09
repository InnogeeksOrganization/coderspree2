#include <iostream>
#include<cmath>
using namespace std;

bool IsPrime(int n){
    int c = 0;
    for(int i = 2;i<=sqrt(n);i++){
        if(n%i == 0){
            c++;
        }
    }
    return c==0;
}

int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;
    for(int i = low; i<=high;i++){
        if(IsPrime(i))
            cout << i << endl;
    }


}