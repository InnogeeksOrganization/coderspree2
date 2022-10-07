#include <cstdio>
int main()
{
    int n, b;
    scanf("%d%d", &n, &b);
    int a[10];
    int count=0;
    while(n)
    {
        a[count]=n%b;
        n=n/b;
        count++;
    }
    for(int i=0; i<count; i++)
    {
        printf("%d",a[count-i-1]);
    }
    
    return 0;
}