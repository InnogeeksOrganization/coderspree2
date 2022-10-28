#include<iostream>
using namespace std;


int main(){
    //write your code here
    int n, d, ind = -1;
    cin >> n;
    int arr[n] = {0};
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    cin >> d;
    for(int i = 0; i<n; i++){
        if(arr[i] == d){
            ind = i;
            break;
        }
    }
    cout << ind << endl;
}