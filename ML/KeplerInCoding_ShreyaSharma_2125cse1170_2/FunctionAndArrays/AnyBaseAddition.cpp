#include <cstdio>

int main()
{
    int b, n1, n2;
    scanf("%d%d%d",&b,&n1,&n2);
    int sum[10];
    int count=0;
    int carry=0;
    while(n1 || n2 || carry)
    {
        sum[count]=(n1%10+n2%10+carry)%b;
        carry= (n1%10+n2%10+carry)/b;

        n1=n1/10;
        n2=n2/10;
        count++;
    }
    for(int i=0; i<count; i++)
    {
        printf("%d",sum[count-1-i]);
    }

    return 0;
}