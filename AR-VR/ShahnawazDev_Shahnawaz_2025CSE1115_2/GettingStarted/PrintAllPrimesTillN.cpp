#include <bits/stdc++.h>
using namespace std;
int main(int argc, char **argv){
    int low, high;
    cin >> low >> high;

    while(low<=high)
    {
        int flag=1;
        if(low>3)
        {
            for(int i = 2 ;i*i<=low;i++)
            {
                if(low%i==0)
                {   
                    flag=0;              
                }
            }
        }
        if(flag) 
            printf("%d\n",low);
        low++;
    }
    return 0;
}