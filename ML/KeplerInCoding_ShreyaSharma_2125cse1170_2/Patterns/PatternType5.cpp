#include <cstdio>
#include <cstdlib>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<abs(n/2-i); j++)
        {
            printf("\t");
        }
        for(int j=0; j<n-2*abs(n/2-i); j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}