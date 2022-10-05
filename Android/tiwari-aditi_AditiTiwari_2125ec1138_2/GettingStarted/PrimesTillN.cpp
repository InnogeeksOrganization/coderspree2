#include<iostream>
using namespace std;

int main(){
    int low,high,i,j,mid,count;
    cin>>low;
    cin>>high;
    cout<<"\n";
    for(i=low;i<=high;i++){
        if(i==1)
        continue;
        else if (i==2)
            cout<<i<<endl;
        else{
            mid = int(i/2);
            count = 0;
            for(j=2;j<=mid;j++){
                if(i%j==0)
                    count++;
                }
            if(count==0)
                cout<<i<<endl;
            }
    }
}