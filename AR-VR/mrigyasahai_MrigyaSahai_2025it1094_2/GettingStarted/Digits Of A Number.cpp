#include <iostream>
using namespace std;
#include <iostream>
using namespace std;
int main(int argc, char **argv){
    long n;
    cin >> n;

    int rem, digit; 
    
    int i = 0, a[10];
    while(n > 0){
        rem = n % 10;
        a[i] = rem;
        n = n / 10;
        i++;
    }
    
    int size = i-1;
    for(i = size ; i >= 0 ; i-- ){
        cout << a[i] << endl;
    }
    return 0;
    
}

