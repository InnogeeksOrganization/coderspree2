#include <cstdio>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i =0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=0; i<n; i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    for(int i=0; i<max; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i>=max-a[j])
            printf("*\t");
            else 
            printf("\t");
        }
        printf("\n");
    }
    
    return 0;
}