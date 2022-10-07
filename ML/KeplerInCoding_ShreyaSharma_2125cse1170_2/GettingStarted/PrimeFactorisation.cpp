#include <cstdio>

int main()
{
    int n, m;
    scanf("%d",&n);
    m=n;
    for(int i=2; i<n; i++)
    {
        while(m%i==0)
        {
            printf("%d ",i);
            m=m/i;
        }
        if(m==1)
        break;
    }
    return 0;
}
