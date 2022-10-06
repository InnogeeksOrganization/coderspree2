#include <cstdio>
#include <cstdlib>

int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        printf("%d\t",j+1);
        for(int j=0; j<2*n-3-(2*i); j++)
        printf("\t");
        for(int j=i+1; j>0 && i!=n-1; j--)
        printf("%d\t",j);
        if(i==n-1)
        {
        for(int j=n-1; j>0; j--)
        printf("%d\t",j);
        }
        printf("\n");
    }
    return 0;
}