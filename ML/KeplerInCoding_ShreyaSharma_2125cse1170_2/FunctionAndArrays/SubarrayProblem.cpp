#include <cstdio>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(int i=1; i<=n; i++)
    {
        int count =0;
        while(count+i-1<n)
        {
            for(int j=0; j<i; j++)
            {
                printf("%d ", a[j+count]);
            }
            count++;
            printf("\n");
        }
        
    }

}