#include <cstdio>
#include <cmath>
int sum(int, int, int);


int main()
{
    int b, n1, n2;
    scanf("%d%d%d",&b,&n1,&n2);
    int s1=0;
    int c=0;
    while(n2)
    {
        int m2=n2%10;
        n2=n2/10;
        int count=0;
        int a[10];
        
        int n= n1;
        int carry=0;
        while(n || carry)
        {
            int m1= n%10;
            n= n/10;
            if(m1*m2+carry>=b)
            {
                
                a[count]=(m1*m2+carry)%b;
                carry=m1*m2/b;
                count++;
            }
            else
            {
                a[count]=m1*m2+carry;
                count++;
                carry=0;
            }
        }
     
        int s2=0;
        for(int i=0; i<count; i++)
        {
            s2=s2+a[i]*pow(10,i);
        }
        int s= sum(b, s1, s2*pow(10,c));
        s1=s;
        c++;
        
    }
    printf("%d",s1);
    
}

int sum(int b, int n1, int n2)
{
    
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
    int s=0;
    for(int i=0; i<count; i++)
    {
        s=s+sum[i]*pow(10,i);
        
    }

    return s;
}