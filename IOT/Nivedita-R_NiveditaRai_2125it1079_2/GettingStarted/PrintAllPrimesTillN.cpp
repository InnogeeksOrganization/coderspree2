#include <iostream>
#include<cmath>
using namespace std;
int main(int argc, char **argv){
    int low, high,  i,j,c=0;
    cin >> low >> high;
    for(i=low;i<=high;i++)
    {c=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==0)
        cout<<i<<endl;
    }
return 0;

}