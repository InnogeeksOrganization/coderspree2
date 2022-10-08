#include <cstdio>
#include <cmath>
int main()
{
    int n, b;
    scanf("%d%d", &n, &b);
    int index=0;
    int sum=0;
    while(n)
    {
        sum=sum+ (n%10* pow(b,index));
        index++;
        n=n/10;
    }
    printf("%d",sum);
    
    return 0;
}