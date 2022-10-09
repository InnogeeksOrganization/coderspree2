#include <cstdio>
#include <cmath>
int main()
{
    int n, b, b1;
    scanf("%d%d%d", &n, &b, &b1);
    int index=0;
    int sum=0;
    while(n)
    {
        sum=sum+ (n%10* pow(b,index));
        index++;
        n=n/10;
    }
    n=sum;
    int a[10];
    int count=0;
    while(n)
    {
        a[count]=n%b1;
        n=n/b1;
        count++;
    }
    for(int i=0; i<count; i++)
    {
        printf("%d",a[count-i-1]);
    }
    
    return 0;
}
