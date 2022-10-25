#include <cstdio>

int main()
{
    int n;
    scanf("%d",&n);
    int c=0;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            c++;
            printf("%d\t",c);
        }
        
        
        printf("\n");
    }
    return 0;
   
}