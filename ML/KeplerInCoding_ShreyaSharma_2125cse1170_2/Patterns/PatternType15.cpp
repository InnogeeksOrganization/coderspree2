#include <cstdio>
#include <cstdlib>

int main()
{
    int n;
    scanf("%d",&n);
    int c;
    
    for(int i=0; i<n; i++)
    {
        if(i<=n/2)
        c=i+1;
        else
        c=n-i;
        for(int j=0; j<abs(n/2-i); j++)
        {
            printf("\t");
        }
        int flag=c-1;
        for(int j=0; j<n-2*abs(n/2-i); j++)
        {
            printf("%d\t",c);
            if(j<flag)
            c++;
            else
            c--;
        }
        printf("\n");
    }
    return 0;
}