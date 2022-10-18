#include <iostream>
using namespace std;
int main(int argc, char**argv){
    int n;
    cin >> n;

    int space,star,c=1,c1;
    space = n/2;
    star = 1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<space;j++)
            cout<<"\t";
        for(int j=0;j<star; j++)
        {
            
            cout<<c<<"\t";
            if(j<star/2) c++;
            else c--;
        }
        if(i<n/2)
        {
            space--;
            star = star + 2;
            c=i+2;
        }
        else
        {   
            space++;
            star = star - 2;
        }
        cout<<endl;
    }
    return 0;
    
}