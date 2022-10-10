#include <cstdio>
int fib(int);

int main()
{
    int n;
    scanf("%d",&n);
    int c=0;
    int n1=0;
    int n2=1;
    
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            if(i+j==0)
            {
                printf("0\t");
                continue;
            }
            printf("%d\t",n2);
            c=n1;
            n1=n2;
            n2=c+n2;

            
        }
        
        
        printf("\n");
    }
    return 0;
   
}

