#include <iostream>
using namespace std;

int main() {
	int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    int b[5];
    int i;
    for(i=0;i<5;i++)
    {
    int min=a[i];
    int c=0;
    for(int j=0;j<5;j++)
    {
    if(min>a[j])
    c++;
    }
    b[i]=c;
    }
    for(i=0;i<5;i++)
    cout<<b[i]<<endl;
    return 0;
}
