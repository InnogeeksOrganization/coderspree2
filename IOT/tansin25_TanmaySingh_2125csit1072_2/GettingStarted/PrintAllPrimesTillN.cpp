#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int low, high,i,j,c;
    cin >> low >> high;
    for(i=low;i<=high;i++)
{
 if(i==1||i==0) 
 continue;
 c=1;
 for(j=2;j<=i/2;j++)
 {
    if(i%j==0)
    {
    c=0;
    break;
    }
 }
if(c==1)
cout<<i<<"\n";
}
 return 0;
 }
