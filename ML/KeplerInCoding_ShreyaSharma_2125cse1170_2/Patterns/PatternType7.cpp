#include <cstdio>
#include <cstdlib>

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
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