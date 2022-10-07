#include <cstdio>
#include <cstdlib>

int main()
{
    int n;
    scanf("%d",&n);
    int mid=n/2;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(abs(i-mid)+abs(j-mid)==mid)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        
        printf("\n");
    }
    return 0;
}