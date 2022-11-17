#include <cstdio>
int main()
{
    int n; 
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    int max= a[0];
    int min= a[0];

    for(int i=1; i<n; i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
        if(max<a[i])
        {
            max=a[i];
        }
    }
    printf("%d", max-min);
    return 0;
}