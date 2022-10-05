#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int num1, num2;
    cin >> num1 >> num2;

    int n1=num1;
    int n2= num2;
    
    while(n1%n2!=0)
    {
        int temp=n2;
        n2= n1%n2;
        n1= temp;
    }
    printf("%d\n%d", n2, (num1*num2)/n2);
    return 0;
}