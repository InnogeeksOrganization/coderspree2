#include<iostream>
using namespace std;

int main(){
    //write your code here
    int n;
    cin >> n;
    int arr[n] = {0}, max = 0, min;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
        if(arr[i] > max){
            max = arr[i];
        }
    }
    min = max;
    for(int i = 0; i<n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << max - min << endl;
}