#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a>90)
    cout<<"excellent"<<endl;
    else if(a<=90 && a>80)
    cout<<"good"<<endl;
    else if(a>70 && a<=80)
    cout<<"fair"<<endl;
    else if(a>60 && a<=70)
    cout<<"meets expectations"<<endl;
    else
    cout<<"below par"<<endl;
    

    return 0;
}
