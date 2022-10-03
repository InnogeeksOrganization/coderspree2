#include <iostream>
using namespace std;
int  main()
{
    int t,n,i,c;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=0;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c=0)
    cout<<"prime"<<endl;
    else cout<<"not prime"<<endl;

}
return 0;
}
