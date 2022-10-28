#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;
    int num3=num1,num4=num2;
    int k=2,rem1,rem2,mut=1,a[10000];
    while(num1!=1||num2!=1){
        rem1=num1%k;
        rem2=num2%k;
        if(rem1==0&&rem2==0){
            mut=mut*k;
            num1=num1/k;
            num2=num2/k;
        }
        else if(rem1==0&&rem2!=0){
        num1=num1/k;
        mut=mut*k;
            
       }
                else if(rem2==0&&rem1!=0){
          num2=num2/k;
          mut=mut*k;
                }
        else
      k++;
    }
    int hcf=(num3 *num4)/mut;
    cout<<hcf<<endl<<mut<<endl;
    return 0;
}
