#include <cstdio>
int main()
{
    int n;
    printf("enter=");
    scanf("%d",&n);
    int a[20];
    int count=0;
    while(n)
    {
        ++count;
        a[count-1]=n%10;
        n=n/10;
    }
    for(int i=0; i<count; i++)
    {
        printf("%d\n",a[count-i-1]);
    }
}