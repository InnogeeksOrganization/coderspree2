#include <iostream>
using namespace std;
int main()
{
    int low,high,i,c,j;
    cin>>low>>high;
    for(i=low;i<=high;i++)
    {
        c=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            c++;
        }
        if(c==0)
        cout<<i<<endl;
    }
return 0;
}
