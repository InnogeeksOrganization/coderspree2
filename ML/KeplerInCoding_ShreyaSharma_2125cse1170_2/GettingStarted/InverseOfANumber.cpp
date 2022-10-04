#include <cstdio>
int main()
{
    int n;
    scanf("%d",&n);
    int a[20];
    int count=0;
    while(n)
    {
        ++count;
        a[n%10-1]=count;
        n=n/10;
    }
    for(int i=0; i<count; i++)
    {
        printf("%d ",a[count-i-1]);
    }
}