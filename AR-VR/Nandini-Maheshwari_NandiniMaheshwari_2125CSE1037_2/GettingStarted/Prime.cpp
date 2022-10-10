#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int t;
    cin >> t;
    while(t--){
        long int n;
        cin >> n;
        if(n<=1){
            cout << "not prime" << endl;
        }
        else if(n<=3){
            cout << "prime" << endl;
        }
        else if(n%2==0 || n%3==0){
            cout << "not prime" << endl;
        }
        else{
            int flag = 0;
            for (int i = 5; i*i <= n; i = i + 6){
                if (n%i==0 || n%(i+2)==0){
                    flag = 1;
                    cout << "not prime" << endl;
                }    
            }
            if(flag == 0){
                cout << "prime" << endl;
            }
        }
    }
}