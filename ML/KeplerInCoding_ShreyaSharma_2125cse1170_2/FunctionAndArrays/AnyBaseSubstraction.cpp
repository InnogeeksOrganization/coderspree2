#include <cstdio>

int main()
{
    int b, n1, n2;
    scanf("%d%d%d",&b,&n2,&n1);
    int diff[10];
    int count=0;
    int carry=0;
    
    
    while(n1 || n2 || carry)
    {
        int m1=n1%10+carry;
        int m2=n2%10;
        if(m2>m1)
        {
            carry=-1;
            m1=m1+b;
        }
        else
        carry=0;
        diff[count]=(m1-m2);
         
        n1=n1/10;
        n2=n2/10;
        count++;
    }
    int flag=1;
    
    for(int i=0; i<count; i++)
    {
        while(diff[count-1-i]==0 && flag)
        {
            i++;
        }
        printf("%d",diff[count-1-i]);
        flag=0;
    }

    return 0;
}