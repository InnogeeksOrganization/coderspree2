#include <cstdio>
int main()
{
    int n, k;
    scanf("%d%d",&n,&k);
    int m=n;
    int count=0;
    while(n)
    {
        ++count;
        n=n/10;
    }

    int a[count];
    for(int i=0; i<k; i++)
    {
        a[k-i-1]=m%10;
        m=m/10;
    }

    for(int i=0; i<count-k; i++)
    {
        a[count-i-1]=m%10;
        m=m/10;
    }

    for(int i=0; i<count; i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}