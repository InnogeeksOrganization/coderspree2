#include <cstdio>
int main()
{
    int n, d;
    scanf("%d%d", &n, &d);
    int a[10];
    int count=0;
    while(n)
    {
        a[count]=n%10;
        n=n/10;
        count++;
    }
    int flag=0;
    for(int i=0; i<count; i++)
    {
        if(a[i]==d)
        flag++;
    }
    printf("%d",flag);
    return 0;
}